#include <stdio.h>
#include <string.h>
int main(void){

    char letter;
    letter = 'A'; // We have to use singular quotation marks for one character 
    printf("%c\n", letter); //Prints the letter A
    printf("%d\n", letter); //Prints the ASCII numerical value, 65 which is called its character code.
    // Numbers 0 through 9 have ASCII code aswell.
    // The digit characters '0' through '9' each have an ASCII code.
    // For example the character '0' has code 48 and the character '9' has code 57.
    char num0 = '0';
    char num1 = '1';
    printf("%d\n", num0); // ascii value for 0
    printf("%d\n", num1); // ascii value for 1 
    // One thing to note though is that they are different from integer values 0 through 9.
    // For example Look at Three. Three's ascii code defers from its integer value. 
    printf("%d\n", '3'); // will print the ascii code which is 51.
    printf("%d\n", 3); // will print the integer value.
 
    // I can write a loop that loops through the ascii values for numbers 0 - 9.
    char digit;

    for (digit = '0'; digit <='9'; digit++) {
        printf("%c = %d\n", digit, digit);
    }
    return 0;
}


// gcc -o testing_ascii_index testing_ascii_index.c
// ./ascii_index