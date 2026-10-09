/*
Stella Wilcox
Jason Polakis 
University of Illinois Chicago 

Prompt: Write a complete C program that reports the integer value (From the ASCII table) for 
an arbitrary number of user inputted characters. Allow the user to input as many characters as 
they choose, and report back the ASCII index (recall, this is done automatically, simply by interpreting
the characters as integers). The user will then enter in the "#" character as that will signify 
the end of data input. The program should then report both the total number of characters 
that were inputted as well as the sum of the integer values for the characters. 
Examples:
    1.) Input: CS107#
        Output: 67 83 49 48 55
        Sum of 5 chars: 302
    2.) Input: a b c X Y Z ! #
        Output: 97 98 99 88 89 90 33
        Sum of 7 chars: 594
    3.) Input: #
        Output: 
        Sum of 0 chars: 0
*/



#include <stdio.h>
#include <string.h>
int main(void){
    char character; //holds one input character at a time 
    int count = 0; //how many characters we have processed 
    int sum = 0; //running total of their ascii values
    // read the first character before checking the loop condition
    // the space before %c skips spaces, tabs and newlines
    scanf(" %c", &character);
    //keep going while the character is not '#'
    // single quotes mean we are referring to one singular character and so it goes 
    while (character != '#') {
        //%d prints the character integer (ascii) value 
        
        // for example 'A' prints at 65
        printf("%d ", character);
        
        // count the character we just processed
        count=count+1;

        //add its ascii value to our running total 
        sum=sum+character;

        // read the next character 
        //the loop then checks whetierh the new character is "#"
        scanf(" %c", &character);
    }
    // when we reach herre it means the character is '#'
    // print the final count and sum on the new line.
    printf("\nSum of %d chars: %d\n", count, sum);

    return 0;
}    


// To compile in the terminal: gcc -o ascii_index ascii_index.c
// To run the program in the terminal: .\ascii_index