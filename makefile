all: at

at: at.o print_arrays.o
	gcc --std=gnu89 at.o print_arrays.o -o at

at.o: at.c print_arrays.h
	gcc --std=gnu89 -c at.c

print_arrays.o: print_arrays.c print_arrays.h
	gcc --std=gnu89 -c print_arrays.c

clean: 
	rm -f *.o
	rm -f at