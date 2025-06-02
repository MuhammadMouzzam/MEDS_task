scale = 1ns/10ps

run_sv_impl : VSquareRoot
	./obj_dir/VSquareRoot

VSquareRoot : VSquareRoot.o
	make -C ./obj_dir/ -f VSquareRoot.mk VSquareRoot

VSquareRoot.o : SquareRoot.sv SquareRoot_tb.cpp
	verilator --cc $(filter %.sv, $^) --trace --exe $(filter %.cpp, $^) --timescale $(scale)