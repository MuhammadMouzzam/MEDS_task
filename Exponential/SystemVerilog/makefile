scale = 1ns/10ps

simulate : run_sv_impl
	gtkwave Exponential.vcd

run_sv_impl : build
	./obj_dir/VExponential

build : VExponential.o
	make -C ./obj_dir/ -f VExponential.mk VExponential

VExponential.o : Exponential_tb.cpp Exponential.sv
	verilator --cc $(filter %.sv, $^) --trace --exe $(filter %.cpp, $^) --timescale $(scale)
