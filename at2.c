/** file at2.c
 * @author nhtranngoc
 *
 * Program to print and sort array from command line.
 */

#include "print_arrays.h"
#include "sort.h"

/** Main program that fills an array from input argument, prints them and sort them.
 * @return 0, Indicating success.
 */

int main(int argc, char *argv[]) {
	int a[20]; // Sample array for declaration
	fillArray(argc, argv, a, argc-1);
	bubble_sort(a, argc-1);
	return 0; // Success!
}
