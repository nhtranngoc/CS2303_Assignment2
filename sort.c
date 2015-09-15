/** File sort.c
* @author: nhtranngoc
*/

#include "sort.h"


/** Function to sort elements 
    @param a Array to be sorted
    @param num_elements Size of the array
*/
void bubble_sort(int a[], int num_elements) {
   int i, j, k, temp;
 
   for (i = 1; i < num_elements; i++) {
      for (j = 0; j < num_elements - 1; j++) {
         if (a[j] > a[j + 1]) {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }
  printf("\nSorted array is\n");
  print_int_array(a, num_elements);
}

/** Function to generate an array of random numbers from 0 to a maximum range.
*  @param a[] The array passed in to be generated.
*  @param max Maximum of random range.
*  @param num_elements Size of the array
*/ 
void rand_array_generator(int a[], int max, int num_elements){
  int i;
  for (i=0; i< num_elements; i++){
    a[i] = rand_int_generator(max);
  }
}


/** Function to generate a random number from 0 to a maximum range.
*  @param max Maximum of random range.
   @return generated random number of type int.
*/
int rand_int_generator(int max){
  return (rand() % (max +1));
}
