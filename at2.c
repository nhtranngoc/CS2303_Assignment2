/** file at.c
 * @author Mike Ciaraldi
 *
 * Program to demonstrate arrays in C.
 */

#include "print_arrays.h"

/** Main program for demonstrating arrays. It fills them and prints them.
 * @return 0, Indicating success.
 */

int main(int argc, char *argv[]) {
	int a[argc]; // Sample array for declaration
	fillArray(argc, argv, a, argc);
	return 0; // Success!
}

