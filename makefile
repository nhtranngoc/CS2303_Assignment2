all: at at2

at: at.o print_arrays.o
	gcc -g --std=gnu89 at.o print_arrays.o -o at

at.o: at.c print_arrays.h
	gcc -g --std=gnu89 -c at.c

at2: at2.o print_arrays.o sort.o
	gcc --std=gnu89 at2.o print_arrays.o sort.o -o at2

at2.o: at2.c print_arrays.h sort.h
	gcc --std=gnu89 -c at2.c

sort.o: sort.c sort.h
	gcc -g --std=gnu89 -c sort.c

print_arrays.o: print_arrays.c print_arrays.h
	gcc -g --std=gnu89 -c print_arrays.c

clean: 
	rm -f *.o
	rm -f at at2

docs:
	doxygen
	chmod 744 html/*
	cp -rp html/* ~/public_html/cs2303assig2/
