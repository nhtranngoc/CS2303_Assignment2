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
  int i; // Loop counter
  int a[argc]; // Sample array for declaration

  // Fill the array with consecutive integers
  for (i = 0; i < argc; i++) a[i] = atoi(argv[i]);

  // Now print it out
  print_int_array(a, argc);

  return 0; // Success!
}
