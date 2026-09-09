/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)

Platform: zyBooks (Resource)

Prompt: 
Given two input integers for an arrow body and arrowhead (respectively), print a right-facing arrow.

Ex: If the input is:

0 1
the output is:

    1
    11
0000111
00001111
0000111
    11
    1

*/


// CODE STARTS HERE:

#include <stdio.h>

int main(void) {
   
   // what does baseInt and headInt mean? 
   int baseInt; //this will be 0
   int headInt; //this will be 1

// prompt user
 //  printf("Type in a number, then hit enter: ");
   // collect numerical data 
   scanf("%d", &baseInt);
   //prompt user
//   printf("Type in another number, then hit enter:  ");
   //collect numerical data 
   scanf("%d", &headInt);

   // BUILD THE ARROW 
   printf("    %d\n", headInt);
   
   printf("    %d", headInt);
   printf("%d\n", headInt);

   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", headInt);
   printf("%d", headInt);
   printf("%d\n", headInt);
 
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", headInt);
   printf("%d", headInt);
   printf("%d", headInt);
   printf("%d\n", headInt);

   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", baseInt);
   printf("%d", headInt);
   printf("%d", headInt);
   printf("%d\n", headInt);
   
   printf("    %d", headInt);
   printf("%d\n", headInt);

   printf("    %d\n", headInt);


   return 0;
}
