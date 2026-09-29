/*
Given the integer array dailySalaries with NUM_IN elements, write a for loop that assigns valueSum with the sum of all the integers in dailySalaries that are less than 81.

Ex: If the input is 108 103 62 47 99 61 81 40, then the output is:

Sum of values below 81: 210

*/


#include <stdio.h>

int main(void) {
   const int NUM_IN = 8;
   int dailySalaries[NUM_IN];
   int i;
   int valueSum;

   for (i = 0; i < NUM_IN; ++i) {
      scanf("%d", &(dailySalaries[i]));
   }

   // this next line of code will initialize the valueSum variable to 0 so that it can be used to store the sum of the values in the array that are less than 81 
valueSum = 0; 
// this for loop will iterate through the dailySalaries array and add any values that are less than 81 to the valueSum variable 
for (i = 0; i < NUM_IN; ++i) {
      if (dailySalaries[i] < 81) {
         valueSum += dailySalaries[i];
      }
   }

   printf("Sum of values below 81: %d\n", valueSum);
   
   return 0;
}

/* 
This  progrram reads 8 integersinto an array, adds up only the values 
less than 81 and prints the final total as "sum of values below 81: " followed by the total.



*/

