/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Assign the size of userInput to stringSize. Ex: if userInput is "Hello", output is:
Size of userInput: 5
*/


#include <stdio.h>
#include <string.h>

int main(void) {
   char userInput[50]; // creates a text variable that can hold up to 50 characters 
   int stringSize; // creates an integer varaiable to store the text length number 

   scanf("%s", userInput); // reads the string typed by the user into userInput 

// strlen() counts how many letters are in userInput
// then = will save that number inside stringsize 
stringSize = strlen(userInput);
   printf("Size of userInput: %d\n", stringSize);

   return 0;
}