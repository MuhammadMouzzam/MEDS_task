run_cpp_impl : Exponential
	./Exponential

Exponential : Exponential.o
	gcc Exponential.o -o Exponential -lm

%.o : %.c
	gcc -c Exponential.c -lm

.PHONY: clean

clean :
	rm -rf *.o