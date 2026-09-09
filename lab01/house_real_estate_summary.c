
/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Intructor: Jason Polakis (He created this assignment and showed us how to do it in class but I added the comments.)
Platform: zyBooks (Resource)

Prompt: 
Sites like Zillow get input about house prices from a database and provide nice summaries for readers. Write a program with two inputs, current price and last month's price (both integers). Then, output a summary listing the price, the change since last month, and the estimated monthly mortgage computed as (currentPrice * 0.051) / 12. End the last output with a newline.

Ex: If the input is:
200000 21000
the output is:
This house is $200000. The change is $-10000 since last month.
The estimated monthly mortgage is $850.000000.
Note: Getting the precise spacing, punctuation, and newlines exactly right is a key point of this assignment. Such precision is an important part of programming.
*/

// code starts

#include <stdio.h>

int main() {
    
    //establish variables
    int currentPrice;
    int lastMonthsPrice;

    //collect user input 
    scanf("%d", &currentPrice);
    scanf("%d", &lastMonthsPrice);
// professor says best to put mathematical operations in parenthesis 
    printf("This house is $%d. The change is $%d since last month.\n", currentPrice, (currentPrice - lastMonthsPrice));
    //%f is the specified data output for a function that is specifically going to be a decimal i think?
    printf("The estimated monthly mortgage is $%f.\n", (currentPrice * 0.051) /12);

    return 0;
}