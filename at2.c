/** file at.c
 * @author Mike Ciaraldi
 *
 * Program to demonstrate arrays in C.
 */

#include "print_arrays.h"

/** Main program for demonstrating arrays. It fills them and prints them.
 * @return 0, Indicating success.
 */

int main(int argc, const char *argv[]) {
  int i; // Loop counter
  int a[argc]; // Sample array for 
declaration

  // Fill the array with consecutive integers
  for (i = 1; i < agrc; i++) a[i] = argv[i-1];

  // Now print it out
  print_int_array(a, agrc);

  return 0; // Success!
}
