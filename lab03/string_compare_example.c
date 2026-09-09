/*
Name: Stella Wilcox 

Example of a String Manipulation Tool in C.
There is something called the strcmp() function in C programming
it compares two strings of text to see if they are identical.
If the two strings compared are identical then it will return a zero.
If the two strings compared are not identical, in that they do not match
it will return a different number.

Here is an example of how it works.
Note: You have to include the library for it at the beginning of the code 
or it will not work.
*/

#include <stdio.h> // this includes standard input and output tools for c
#include <string.h> // Includes string tools for strcmp

int main(void) { // At the beginning of every C program
    char warrior[20] = "Spartan"; // Creates a text variable called "warrior" that can hold up to 20 characters, holding the text "Spartan"
    // the code will proceed to campare the variable "warrior" with the text "Spartan"
    if (strcmp(warrior, "Spartan")==0) {
        printf("These words match.\n");
    } else { 
        printf("These words do not match.\n");
    }

// I will do another example of the strcmp() function to show how it works when the two strings do not match
    char adjective[20] = "Disciplined"; // Creates a text variable called "adjective" that can hold up to 20 characters, holding the text "Disciplined"
    // the code will proceed to campare the variable "adjective" with the text "Lazy"
    if (strcmp(adjective, "Lazy")==0) {
        printf("These words match.\n");
    } else { 
        printf("These words do not match.\n");
    }
    


    return 0;


}
