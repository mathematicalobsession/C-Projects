/*
Integer array userScore is declared with size NUM_ELEMENTS. Read NUM_ELEMENTS integers from input and store each integer into userScore in the order the integers are read.

Ex: If the input is 77 29 96 88 54, then the output is:

Array contents: 77 29 96 88 54


*/

#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 5;
   int userScore[NUM_ELEMENTS];
   int i;



   // what the fior oloop below does is it loops through the array (list of numbers) and uses scanf to get the values from the user and store them in the array
for (i = 0; i < NUM_ELEMENTS; ++i) {
      scanf("%d", &(userScore[i]));
   }



	printf("Array contents: ");

	for (i = 0; i < NUM_ELEMENTS; ++i) {
		printf("%d ", userScore[i]);
	}
	printf("\n");

   return 0;
}
