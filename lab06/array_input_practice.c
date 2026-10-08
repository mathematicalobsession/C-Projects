/*

Given the integer array dailyScores with ARR_VALS elements, write a for loop to assign the first half of dailyScores with the integers read from input.

Ex: If the input is 54 112 86, then the output is:

54 112 86 0 0 0 


*/



#include <stdio.h>

int main(void) {
   const int ARR_VALS = 6;
   int dailyScores[ARR_VALS];
   int i;

   // rememeber that ++i mens "increase the value of i by 1, then use the new value" and in a loops it moves the next array position each time 
   
   // this first for loop will initialize the array to 0 so that the seecond half of the array will be zero-initialized 
   for (i = 0; i < ARR_VALS; ++i) {
      dailyScores[i] = 0;
   }
// this second for loop will read the first half of the array from user input 
   for (i = 0; i < ARR_VALS / 2; ++i) {
      scanf("%d", &dailyScores[i]);
   }
//` this third for loop will print the entire array to the console 
   for (i = 0; i < ARR_VALS; ++i) {
      printf("%d ", dailyScores[i]);
   }

   printf("\n");
   
   return 0;
}




/* 
This code reads the first half of the array from user input leaving the 
second hhalf unchanged or zero-initialiized by looping through indexes 0 to ARR_VALS/2 - 1 and using scanf to read the values into the array. 



*/