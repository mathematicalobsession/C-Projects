/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
Declare an array of integers named userNums with size NUM_VALS.
Ex: If the input is 38 48 64 25 7 37, then the output is:
User numbers: 38 48 64 25 7 37 
*/
#include <stdio.h>

int main(void) {
	const int NUM_VALS = 6;
   int i;

   /* Variable declaration goes here */
   // basically all I had to do was declare the array and then use scanf to get the values from the user
    int userNums[NUM_VALS];

    /////////////////////////added whats above 

	scanf("%d", &(userNums[0]));
	scanf("%d", &(userNums[1]));
	scanf("%d", &(userNums[2]));
	scanf("%d", &(userNums[3]));
	scanf("%d", &(userNums[4]));
	scanf("%d", &(userNums[5]));

   printf("User numbers: ");
   for (i = 0; i < NUM_VALS; ++i) {
      printf("%d ", userNums[i]);
   }
   printf("\n");

   return 0;
}



/* What does this code do? 


This code declares an array called userNums that stores 6 integers, reads 6 integer values from the user into that array, and then prints them out in order preceded by “User numbers:”.




*/