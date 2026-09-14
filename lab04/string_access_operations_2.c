/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Given string inputText , character charToFind, and integer strIndex, output "Matching" if the character at index strIndex of inputText matches charToFind. Otherwise, output "Not matching". End each output with a newline.
Ex: If the input is guitar u 1, then the output is:
Matching
Note: Assume the length of string inputText is greater than strIndex.

*/

#include <stdio.h>
#include <string.h>

int main(void) {
   char inputText[10]; // holds 10 characters obviously the char data types holds strings (letters) but needs to be set with a limit 
	char charToFind; // only holds 1 character
	int strIndex;

   scanf("%s", inputText); // data type char gets stored as a string %s
	scanf(" %c", &charToFind); // since charToFind is only holding one character it gets put into %c for a single box and there is a space in front of it because that tells scanf to automatically skip over any left over whitespace )like spaces and newlines before reading the character. You may wonder why  %s doesnt need a space in front of it, that is because %s automatically skips leading spaces adn newlines on its own and thus it does not need an explicit space in front of it. 
	scanf("%d", &strIndex);

// [] looks up the specified character at strIndex in inputText
// == checks if that character equals charToFind
if (inputText[strIndex] == charToFind) { 
   printf("Matching\n"); // prints if the characters aare equivalent 
}
else {
   printf("Not matching\n"); // Prints if characters do not match 
}
   return 0;
}