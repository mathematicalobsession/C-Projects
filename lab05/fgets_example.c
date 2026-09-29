/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Complete the call to fgets() with:
dateStr as the destination to save the characters read
20 as size limit
stdin as the source to read from
Ex: If the input is July 27, 1968, then the output is:
Date: July 27, 1968
*/

#include <stdio.h>

int main(void) {
   char dateStr[20];
   // Complete the call to fgets() with the correct arguments
   // fgets is used to read a line of text from the standard input (stdin) and store it in the dateStr array. The size limit is set to 20 to prevent buffer overflow. 
   fgets(dateStr, 20, stdin);
   printf("Date: %s", dateStr);

   return 0;
}

/*
What does this code do? 
This code reads a line of text from the standard input (stdin) and stores it in the character array `dateStr`. The `fgets()` function is used to read up to 19 characters (leaving space for the null terminator) from the input, ensuring that it does not exceed the size limit of 20. After reading the input, it prints the string with the prefix "Date: ".
*/