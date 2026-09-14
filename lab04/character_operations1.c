
/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Three characters are read from input into variables char1, char2, and char3. If char1, char2, or char3 contains a digit, then output "Input contains a digit". Otherwise, output "Input does not contain a digit". End each output with a newline.
Ex 1: If the input is s9p, then the output is:
Input contains a digit
Ex 2: If the input is $.q, then the output is:
Input does not contain a digit
*/


#include <stdio.h>
#include <ctype.h>

int main(void) {
   char char1;
   char char2;
   char char3;

   scanf("%c", &char1);
   scanf("%c", &char2);
   scanf("%c", &char3);

// checks if char1 OR char2 OR char3 is a number 0 through 9 
if (isdigit(char1) || isdigit(char2) || isdigit(char3)) {
   printf("Input contains a digit\n"); // prints if at least one character is a digit 
}
else
{ 
   printf("Input does not contain a digit\n"); //prints if none of them are digits 
}
   return 0;
}