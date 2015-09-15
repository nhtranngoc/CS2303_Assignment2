/** Program to generate random numbers, print them. sort them then print them again
* @author: nhtranngoc
*/

#include "at3.h"

/** Main function for at3. Creates an array of pseudo random numbers, sort them, then print the sorted array.
*   The range for the function is 0 to 100, the size of the array is 20.
*   @return 0 Indicate success.
*/
int main(){
  srand(time(NULL));
  int a[20];
  rand_array_generator(a, 100, 20);
  printf("Original array: \n");
  print_int_array(a, 20);
  printf("Sorted array: \n");
  bubble_sort(a, 20);

  return 0;
}
