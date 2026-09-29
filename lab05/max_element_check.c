/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Array userVals is assigned with NUM_ELEMENTS integers read from input. If the first element is greater than the last element, then assign integer maxElement with the first element. Otherwise, assign maxElement with the last element.
Ex: If the input is 27 7 85 49 80 28, then the output is:
The larger element is equal to 28.

*/

#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 6; // constant variable for the number of elements in the array 
   int userVals[NUM_ELEMENTS]; // this line declares an array of integers called userVals with a size of NUM_ELEMENTS (6 in this case)
	int maxElement; // this line declares an integer variable called maxElement, which will be used to store the larger of the first and last elements of the userVals array
   int i; // this line declares an integer variable called i, which will be used as a loop counter in the for loop below
   

   // the for loop below iterates from 0 to NUM_ELEMENTS - 1 (i.e., 0 to 5) and reads an integer from input for each iteration, storing it in the corresponding index of the userVals array
	for (i = 0; i < NUM_ELEMENTS; ++i) { 
		scanf("%d", &(userVals[i]));
	}
    // next , the if statement checks if the first element of the userVals array (userVals[0]) is greater than the last element (userVals[NUM_ELEMENTS - 1]). If it is, maxElement is assigned the value of the first element; otherwise, it is assigned the value of the last element.
     if (userVals[0] > userVals[NUM_ELEMENTS - 1]) {
        maxElement = userVals[0];
        } else {
             maxElement = userVals[NUM_ELEMENTS - 1];
        }
        // whats happening above is that the program is comparing the first and last elements of the userVals array and assigning the larger of the two to the maxElement variable.



   printf("The larger element is equal to %d.\n", maxElement);

   return 0;
}




/*
What this code does;
This program reads 6 integers into an array named userVals and compares the first and last elements to determine which one is larger.
It then stores that larger value in maxElement and prints: “The larger element is equal to X.”
 


*/









