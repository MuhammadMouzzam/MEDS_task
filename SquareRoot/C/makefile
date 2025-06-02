run_cpp_impl : build
	./SquareRoot

build : SquareRoot.o
	gcc $^ -o SquareRoot

%.o : %.c
	gcc -c $^

.PHONY: clean

clean : 
	rm -rf *.o