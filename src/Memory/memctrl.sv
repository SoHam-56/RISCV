`timescale 1ns / 100ps

module memctrl #(
    parameter int RAM_WIDTH = 18,
    parameter int RAM_DEPTH = 1024
) (
    // External interface signals - Read
    input  logic                             cntlr_rd_i,
    input  logic [$clog2(RAM_DEPTH-1)-1:0]   cntlr_raddr_i,
    output logic [RAM_WIDTH-1:0]             cntlr_rd_data_o,
    output logic                             cntlr_rd_valid_o,

    // External interface signals - Write
    input  logic                             cntlr_wr_i,
    input  logic [$clog2(RAM_DEPTH-1)-1:0]   cntlr_waddr_i,
    input  logic [RAM_WIDTH-1:0]             cntlr_wr_data_i,
    output logic                             cntlr_wr_done_o,

    // System signals
    input  logic                             clk_i,
    input  logic                             rstn_i,

    // Memory interface signals
    output logic                             mem_rd_o,
    output logic                             mem_wr_o,
    output logic [$clog2(RAM_DEPTH-1)-1:0]   mem_addr_o,
    output logic [RAM_WIDTH-1:0]             mem_wr_data_o,
    input  logic [RAM_WIDTH-1:0]             mem_rd_data_i
);

    typedef enum logic [2:0] {
        IDLE,
        READ_REQ,
        READ_WAIT,
        READ_COMPLETE,
        WRITE_REQ,
        WRITE_WAIT,
        WRITE_COMPLETE
    } state_t;

    state_t current_state, next_state;
    logic [1:0] wait_cycles;

    always_ff @(posedge clk_i or negedge rstn_i) begin
        if (!rstn_i) begin
            current_state <= IDLE;
            wait_cycles <= '0;
        end else begin
            current_state <= next_state;
            if (current_state == READ_WAIT || current_state == WRITE_WAIT)
                wait_cycles <= wait_cycles + 1'b1;
            else
                wait_cycles <= '0;
        end
    end

    always_comb begin

        next_state = current_state;
        mem_rd_o = 1'b0;
        mem_wr_o = 1'b0;
        mem_addr_o = '0;
        mem_wr_data_o = '0;
        cntlr_rd_valid_o = 1'b0;
        cntlr_rd_data_o = '0;
        cntlr_wr_done_o = 1'b0;

        case (current_state)
            IDLE: begin
                // Priority to read operations
                if (cntlr_rd_i) begin
                    next_state = READ_REQ;
                end
                else if (cntlr_wr_i) begin
                    next_state = WRITE_REQ;
                end
            end

            READ_REQ: begin
                mem_rd_o = 1'b1;
                mem_addr_o = cntlr_raddr_i;
                next_state = READ_WAIT;
            end

            READ_WAIT: begin
                mem_rd_o = 1'b1;
                mem_addr_o = cntlr_raddr_i;       // Hold address stable
                if (wait_cycles == 2'b10) begin   // Wait for 2 cycles (HIGH_PERFORMANCE mode)
                    next_state = READ_COMPLETE;
                end
            end

            READ_COMPLETE: begin
                cntlr_rd_valid_o = 1'b1;
                cntlr_rd_data_o = mem_rd_data_i;
                // Check if there's another read pending
                if (cntlr_rd_i) begin
                    next_state = READ_REQ;
                end else begin
                    next_state = IDLE;
                end
            end

            WRITE_REQ: begin
                // If a read request comes in, abort write and service read first
                if (cntlr_rd_i) begin
                    next_state = READ_REQ;
                end else begin
                    mem_wr_o = 1'b1;
                    mem_addr_o = cntlr_waddr_i;
                    mem_wr_data_o = cntlr_wr_data_i;
                    next_state = WRITE_WAIT;
                end
            end

            WRITE_WAIT: begin
                // Even during write wait, check for read request
                if (cntlr_rd_i) begin
                    next_state = READ_REQ;
                end else begin
                    mem_wr_o = 1'b1;
                    mem_addr_o = cntlr_waddr_i;
                    mem_wr_data_o = cntlr_wr_data_i;
                    if (wait_cycles == 2'b01) begin
                        next_state = WRITE_COMPLETE;
                    end
                end
            end

            WRITE_COMPLETE: begin
                cntlr_wr_done_o = 1'b1;
                // Check for pending read before going to IDLE
                if (cntlr_rd_i) begin
                    next_state = READ_REQ;
                end else begin
                    next_state = IDLE;
                end
            end
        endcase
    end

endmodule
