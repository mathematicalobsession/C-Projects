/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

Prompt:
Write a program that removes all non alpha characters from the given input. You may assume that the input string will not exceed 50 characters.
Ex: If the input is:
-Hello, 1 world$!
the output is:
Helloworld
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
         char input[51]; //array to hold up to 50 textt characters 
         // read the whole line of typed text including the spaces and symbols 
         fgets(input, sizeof(input), stdin);
         //start at character index 0 and loop until reaching the end marker '\0'
         for (int i =0; input[i] != '\0'; ++i) { 
           // check if the character at current slot 'i' is a letter (A-Z or a-z)
            if (isalpha(input[i])) {

               // print only that letter to the screen without adding any spaces 
               printf("%c", input[i]);
            }
         }
         printf("\n");
            
         


   return 0;
}

/*
What this program does:
This program reads a line of text input from the user, removes all non-alphabetic characters

*/
