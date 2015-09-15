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
