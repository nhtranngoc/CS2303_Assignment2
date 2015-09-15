/** file print_arrays.c
 * @author Mike Ciaraldi
 *
 * Functions for printing arrays.
 */

#include <stdio.h>
#include "print_arrays.h"

/** Print an array of ints, one per line.
    @param a Array to print
    @param num_elements Number of elements in the array
*/

void print_int_array(int a[], int num_elements) {
  int i; // Loop counter

  for (i = 0; i < num_elements; i++) {
    printf("%d\n", a[i]);
  }
}

/** Print an array of doubles, one per line.
    @param a Array of type double to print
    @param num_elements Number of elements in the array
*/

void print_double_array(double a[], int num_elements) {
	int i; // Loop counter
	for (i = 0; i < num_elements; i++) {
		printf("%lf\n", a[i]);
  }
}

/** Function for getting integer data and storing in an array
    @param Number of parameters argc
    @param Array of parameters argv[]
    @param Array to be stored
    @param Size of the array
*/

void fillArray(int argc, char *argv[], int a[], int num_elements){
	int i; // Loop counter
  	// Fill the array with consecutive integers
  	for (i = 0; i < num_elements; i++) a[i] = atoi(argv[i+1]);
	// Now print it out
	print_int_array(a, num_elements);
}
