/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Integer requestedCherries is read from input representing the number of cherries. Output:
"Small carton", if there are 50 - 60 cherries inclusive.
"Medium carton", if there are 120 - 150 cherries inclusive.
End each output with a newline.
*/

#include <stdio.h>

int main(void) {
   int requestedCherries;

   scanf("%d", &requestedCherries);  

// code needs to check to see if "requestedCherries is between 50 and 60  
if (requestedCherries >= 50 && requestedCherries <= 60) {
   printf("Small carton\n"); // prints "small carton" if inside range 50-60 
}
// checks if requestedCherries is between the range 120 and 150
// this next else if statement is basically saying 
// "okay, well if the condition for the previous if statement isnt met, lets check if this next if statement;s condition is met, if not that or else this" 
else if (requestedCherries >= 120 && requestedCherries <= 150) {
   printf("Medium carton\n"); // prints "medium carton" so long as its inside of the previous range 
}
   return 0;
}