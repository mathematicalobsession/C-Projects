
/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Two characters are read from input into variables firstChar and lastChar. Output "Valid input" if firstChar and lastChar are not the same character (regardless of case if the input contains letters). Otherwise, output "Invalid input". End each output with a newline.
Ex 1: If the input is d=, then the output is:
Valid input
Ex 2: If the input is Vv, then the output is:
Invalid input
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
   char firstChar;
   char lastChar;

   scanf("%c", &firstChar);
   scanf("%c", &lastChar);

// checks if the lowercase versions of both characters are NOT equal to one another 
// tolower() converts both characters to lowercase before comparing 
if(tolower(firstChar) != tolower(lastChar)) {
   printf("Valid input\n"); // prints if the caracters are different 
}
else
{
   printf("Invalid input\n"); //pritns if the characters are the same
}
   return 0;
}