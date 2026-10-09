/* 
Name: Stella Wilcox
University of Illinois at Chicago 
C/C++ Programming (CS107)

Goal:
Print out all of the integer multiples of 7 up to 1000 using a
*/

#include <stdio.h>

int main() { 
    int num = 7; // declare a variable called num that is set equal to 7
    while (num<=100) {
        printf("%d is an integer multiple of 7. \n", num);
        num+=7;
    }

// to compile the code in the terminal run the following command: gcc -o multiples multiples.c
// to run the code in the terminal run the following command: ./multiples

    return 0;


}