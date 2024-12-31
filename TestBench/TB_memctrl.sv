`timescale 1ns / 100ps

module TB_memctrl;
    parameter CLK_PERIOD = 10;
    parameter RAM_WIDTH = 8;
    parameter RAM_DEPTH = 8;

    // Clock and reset
    reg clk;
    reg rstn;

    reg rd_enable, mem_rd;
    reg wr_enable, mem_wr;
    reg [$clog2(RAM_DEPTH-1)-1:0] read_address, write_address, mem_addr;

    reg [RAM_WIDTH-1:0] write_data, mem_wr_data;
    wire [RAM_WIDTH-1:0] read_data, mem_rd_data;
    
    wire rd_valid;
    wire wr_done;

    reg [RAM_WIDTH-1:0] reference_memory [0:RAM_DEPTH-1];
    integer i, errors, test_number;
    reg [31:0] random_seed;

    reg [31:0] assertion_errors = 0;

    memctrl #(
        .RAM_WIDTH(RAM_WIDTH),
        .RAM_DEPTH(RAM_DEPTH)
    ) DUT (
        // Controller Read Interface
        .cntlr_rd_i(rd_enable),
        .cntlr_raddr_i(read_address),
        .cntlr_rd_data_o(read_data),
        .cntlr_rd_valid_o(rd_valid),
    
        // Controller Write Interface
        .cntlr_wr_i(wr_enable),
        .cntlr_waddr_i(write_address),
        .cntlr_wr_data_i(write_data),
        .cntlr_wr_done_o(wr_done),
    
        // System Signals
        .clk_i(clk),
        .rstn_i(rstn),
    
        // Memory Interface
        .mem_rd_o(mem_rd),
        .mem_wr_o(mem_wr),
        .mem_addr_o(mem_addr),
        .mem_wr_data_o(mem_wr_data),
        .mem_rd_data_i(mem_rd_data)
    );
    
    // Memory instantiation: xilinx_single_port_ram_read_first
    xilinx_single_port_ram_read_first #(
        .RAM_WIDTH(RAM_WIDTH),
        .RAM_DEPTH(RAM_DEPTH),
        .RAM_PERFORMANCE("HIGH_PERFORMANCE"),
        .INIT_FILE("")
    ) MEM (
        .addra(mem_addr),      // Address bus
        .dina(mem_wr_data),    // RAM input data
        .clka(clk),            // Clock
        .wea(mem_wr),          // Write enable
        .ena(mem_rd || mem_wr),// RAM Enable (active for reads/writes)
        .rsta(~rstn),          // Reset
        .regcea(1'b1),         // Output register enable
        .douta(mem_rd_data)    // RAM output data
    );


    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    task reset_dut;
        begin
            rstn = 1'b0;
            rd_enable = 1'b0;
            wr_enable = 1'b0;
            read_address = '0;
            write_address = '0;
            write_data = '0;
            #(CLK_PERIOD * 2);
            rstn = 1'b1;
            #(CLK_PERIOD * 2);
        end
    endtask

    // Write task
    task write_to_memory(input [$clog2(RAM_DEPTH-1)-1:0] address, input [RAM_WIDTH-1:0] data);
        begin
            @(posedge clk);
            wr_enable = 1'b1;
            write_address = address;
            write_data = data;
            @(posedge clk);
            wr_enable = 1'b0;
            // Wait for write to complete
            while (!wr_done) @(posedge clk);
            reference_memory[address] = data;
        end
    endtask

    // Read and verify task
    task read_and_verify(input [$clog2(RAM_DEPTH-1)-1:0] address);
        begin
            @(posedge clk);
            rd_enable = 1'b1;
            read_address = address;
            @(posedge clk);
            rd_enable = 1'b0;
            // Wait for valid read data
            while (!rd_valid) @(posedge clk);
            // Verify the read data
            if (read_data !== reference_memory[address]) begin
                $display("Error at address %0d: Expected %h, Got %h", address, reference_memory[address], read_data);
                errors = errors + 1;
            end
        end
    endtask

    // Task for back-to-back operations
    task back_to_back_operations(input int num_ops);
        reg [$clog2(RAM_DEPTH-1)-1:0] addr;
        reg [RAM_WIDTH-1:0] data;
        begin
            $display("\nTest %0d: Performing %0d back-to-back operations", test_number, num_ops);
            for (i = 0; i < num_ops; i = i + 1) begin
                addr = $random(random_seed) % RAM_DEPTH;
                data = $random(random_seed);

                if ($random(random_seed) % 2) begin
                    write_to_memory(addr, data);
                    read_and_verify(addr);
                end else begin
                    read_and_verify(addr);
                end
            end
        end
    endtask

    // Task for read-write conflicts
    task test_read_write_conflicts;
        reg [$clog2(RAM_DEPTH-1)-1:0] addr;
        reg [RAM_WIDTH-1:0] data;
        begin
            $display("\nTest %0d: Testing read-write conflicts", test_number);
            // Start a write operation
            addr = $random(random_seed) % RAM_DEPTH;
            data = $random(random_seed);
            wr_enable = 1'b1;
            write_address = addr;
            write_data = data;
            @(posedge clk);
            wr_enable = 1'b0;  // Deassert write before starting read
            
            // Wait at least one cycle
            @(posedge clk);
            
            // Now start the read operation
            rd_enable = 1'b1;
            read_address = (addr + 1) % RAM_DEPTH;
            @(posedge clk);
            rd_enable = 1'b0;
    
            // Wait for operations to complete
            while (!rd_valid && !wr_done) @(posedge clk);
    
            // Verify final states
            read_and_verify((addr + 1) % RAM_DEPTH);
        end
    endtask

    // Test stimulus
    initial begin
        
        errors = 0;
        test_number = 1;
        random_seed = 32'h1234_5678;

        // Reset the DUT
        reset_dut();

        // Test 1: Sequential write and read of all memory locations
        $display("Test %0d: Sequential write/read of all locations", test_number);
        for (i = 0; i < RAM_DEPTH; i = i + 1) begin
            write_to_memory(i, i + 16'hDEAD);
        end
        for (i = 0; i < RAM_DEPTH; i = i + 1) begin
            read_and_verify(i);
        end
        test_number = test_number + 1;

        // Test 2: Random address access
        $display("\nTest %0d: Random address access", test_number);
        for (i = 0; i < 100; i = i + 1) begin
            automatic reg [$clog2(RAM_DEPTH-1)-1:0] addr = $random(random_seed) % RAM_DEPTH;
            automatic reg [RAM_WIDTH-1:0] data = $random(random_seed);
            write_to_memory(addr, data);
            read_and_verify(addr);
        end
        test_number = test_number + 1;

        // Test 3: Back-to-back operations
        back_to_back_operations(50);
        test_number = test_number + 1;

        // Test 4: Read-write conflicts
        // repeat(10) test_read_write_conflicts();
        // test_number = test_number + 1;

        // Test 5: Walking ones pattern
        $display("\nTest %0d: Walking ones pattern test", test_number);
        for (i = 0; i < RAM_WIDTH; i = i + 1) begin
            write_to_memory(i, 1 << i);
            read_and_verify(i);
        end
        test_number = test_number + 1;

        // Report results
        #(CLK_PERIOD * 2);
        if (errors == 0 && assertion_errors == 0)
          $display("\nAll tests passed successfully!");
        else
          $display("\nTests completed with %0d functional errors and %0d assertion failures", errors, assertion_errors);

        #(CLK_PERIOD * 10);
        $finish;
    end

    // Coverage collection
    // covergroup memory_coverage @(posedge clk);
    //     address_cp: coverpoint write_address {
    //         bins corners[] = {0, RAM_DEPTH-1};
    //         bins middle = {[1:RAM_DEPTH-2]};
    //     }
    //
    //     operation_cp: coverpoint {rd_enable, wr_enable} {
    //         bins read = {2'b10};
    //         bins write = {2'b01};
    //         bins idle = {2'b00};
    //         illegal_bins invalid = {2'b11};
    //     }
    //
    //     state_xition: cross address_cp, operation_cp;
    // endgroup
    //
    // memory_coverage cov = new();

    // Waveform generation
    initial begin
        $dumpfile("TB_memctrl.vcd");
        $dumpvars(0, TB_memctrl);
    end

    // Assertions
    property no_simultaneous_rd_wr;
        @(posedge clk) not(rd_enable && wr_enable);
    endproperty

    assert property (no_simultaneous_rd_wr)
    else begin 
        $error("Simultaneous read and write detected!");
        assertion_errors = assertion_errors + 1;
    end

    // property valid_completes;
    //     @(posedge clk) rd_enable |-> ##[1:5] rd_valid;
    // endproperty

    // assert property (valid_completes)
    // else $error("Read valid not asserted within 5 cycles of read enable!");

endmodule
