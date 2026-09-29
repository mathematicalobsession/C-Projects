/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

Prompt: 
Integer firstVal is read from input. Assign the elements of patientNumbers with firstVal, firstVal + 1, firstVal + 2, and so on, until all elements have been assigned.
Ex: If the input is 25, then the output is:
Patient numbers: 25 26 27 28 29 

*/

#include <stdio.h>

int main(void) {
	const int NUM_ELEMENTS = 5;
	int firstVal;
   int patientNumbers[NUM_ELEMENTS];
   int i;

	scanf("%d", &firstVal);

for (i = 0; i < NUM_ELEMENTS; ++i) {
      patientNumbers[i] = firstVal + i;
   } // this loop assigns the elements of patientNumbers with firstVal, firstVal + 1, firstVal + 2, and so on 


   printf("Patient numbers: ");
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("%d ", patientNumbers[i]);
   }
   printf("\n");

   return 0;
}




// Descrption: tHIs program reads an integer value from input and assigns it to the first element of an array called patientNumbers. It then fills the rest of the array with consecutive integers starting from that first value. Finally, it prints out the contents of the array in a formatted manner. 







