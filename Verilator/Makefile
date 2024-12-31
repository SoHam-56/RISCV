# Verilator binary
VERILATOR = /usr/bin/verilator

# Design files
DESIGN_FILES = \
  ../src/Memory/xilinx_single_port_ram_read_first.sv \
  ../src/Memory/memctrl.sv

# Testbench
TESTBENCH = ../TestBench/TB_memctrl.sv

# Top module
TOP_MODULE = TB_memctrl
BINARY_NAME = $(TOP_MODULE)_sim

# Build flags for assertions and other options
VERILATOR_FLAGS = --sv \
                 --binary \
                 --assert \
                 --coverage \
                 --trace \
                 --timing \
                 --top-module $(TOP_MODULE) \
                 --threads $(shell nproc) \
                 --Wno-WIDTHTRUNC \
                 --Wno-CASEINCOMPLETE \
                 --Wno-WIDTHEXPAND
#                  --x-assign unique

# Default target
default: run

# Verilate and build
build:
	@echo "-- Verilator simulation"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) $(VERILATOR_FLAGS) \
	  $(DESIGN_FILES) \
	  $(TESTBENCH) \
	  -o $(BINARY_NAME)
	@echo "-- COMPILE -----------------"
	make -C obj_dir -f V$(TOP_MODULE).mk

# Run simulation
run: build
	@echo "-- RUN ---------------------"
	./obj_dir/$(BINARY_NAME)
	@echo "-- DONE --------------------"

# Clean target
clean:
	-rm -rf obj_dir *.log *.dmp *.vpd core $(TOP_MODULE)_sim *.vcd

