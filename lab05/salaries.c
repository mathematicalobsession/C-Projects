/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Given the integer array dailySalaries with ARR_VALS elements, write a for loop to output the integers in the second half of dailySalaries in reverse order. Separate the integers with a comma followed by a space (", ").
Ex: If the input is 98 46 77 39, then the output is:
39, 77
*/

#include <stdio.h>

int main(void) {
   const int ARR_VALS = 4;
   int dailySalaries[ARR_VALS];
   int i;

   for (i = 0; i < ARR_VALS; ++i) {
      scanf("%d", &(dailySalaries[i]));
   }
// Write a for loop to output the integers in the second half of dailySalaries in reverse order 
   for (i = ARR_VALS - 1; i >= ARR_VALS / 2; --i) {
      printf("%d", dailySalaries[i]);

      if (i > ARR_VALS / 2) {
         printf(", ");
      }
   }

   printf("\n");
   
   return 0;
}
/*
What does this code do?
This code reads a fixed number of integers (defined by the constant ARR_VALS, which is set to 4) into an array called dailySalaries. It then outputs the integers in the second half of the array in reverse order, separating them with a comma and a space.
*/