/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Given string inputStr and integers idx1 and idx2, change the character at index idx1 of inputStr to the character at index idx2.
Ex: If the input is tiger 0 2, then the output is:
giger
Note: Assume the length of string inputStr is greater than or equal to both idx1 and idx2.

*/




#include <stdio.h>
#include <string.h>

int main(void) {
   char inputStr[10];
	int idx1;
	int idx2;

   scanf("%s", inputStr);
	scanf("%d", &idx1);
	scanf("%d", &idx2);
// inputSrt[idx2] will take the character that is located at position idx2
// then = assigns (copies) that character onto the position at idx1
// remember that index just means the number character in a string starting from zero
// [] is called the array subscript operator, this is the operator that is looking up the character at a specific location
inputStr[idx1] = inputStr[idx2];

   printf("%s\n", inputStr);

   return 0;
}