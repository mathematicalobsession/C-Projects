
/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
oops i lost it
*/


#include <stdio.h>

int main(void) {
   int cash;
   
   scanf("%d", &cash);
// user has inputted the cash

// the program will check the cash is greater than or equal to 10 
if (cash >= 10) {
   printf("Buy a hat.\n"); // if the cash is greater than or equal to 10 then there will be a message output that prompts the user to buy a hat 
}

// now the program will check if the cash is greater than or equal to 26 
if (cash >= 26) {
   printf("Buy a new coat.\n"); // this is going to output a message prompting the user to buy a coat if they have 26 bucks
}

// now the program will check if the cash is less than or equal to 2
if (cash <= 2) {
   printf("Save money.\n"); // this outputs the user to save money because they are low on cash
} // close statement 
   return 0;
}