/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
2.27.1: LAB: Input: Mad Lib
Prompt: 
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.
Complete the program to read the needed values from input, that the existing output statement(s) can use to output a short story.
Ex: If the input is:
Eric 12 cars Chipotle 
the output is:
Eric buys 12 different types of cars at Chipotle.
*/

// code starts here

#include <stdio.h>

// char randomName[50] creates a vessel name randomName that can store up to 50 characters of text
// adjusting the number within the brackets adjust storage capacity 
// char gets stored using scanf() with %c for a singular character 
// char get stored using scanf() with %s for a word or string 

int main(void) {
   char firstName[50]; // sets the character capacity to 50 spaces 
   int  wholeNumber;
   char pluralNoun[50];
   char genericLocation[50];

  // printf("Pick a name: \n"); **TERMINATED CODE (FOR TESTING PURPOSES)**
   scanf("%s", firstName); //NOTE THERE IS NO & THATSS ONLY FOR NUMBERS, FLOATS AND LONG LONGS 

 //  printf("Pick a whole number: \n"); **TERMINATED CODE (FOR TESTING PURPOSES)**
   scanf("%d", &wholeNumber);
   
  // printf("Pick a plural noun: \n"); **TERMINATED CODE (FOR TESTING PURPOSES)**
   scanf("%s", pluralNoun);

   // printf("Pick a place: \n"); **TERMINATED CODE (FOR TESTING PURPOSES)**
   scanf("%s", genericLocation);




   
   //note that we can stick data types with words in quotes all in one line
   printf("%s buys %d different types of %s at %s.\n", firstName, wholeNumber, pluralNoun, genericLocation);

   return 0;
}