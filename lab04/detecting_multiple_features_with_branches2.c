
/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Integers numPoints1 and numPoints2 are read from input. Write one if statement and one if-else statement:
If numPoints1 is greater than or equal to 35, then output "numPoints1 is greater than or equal to 35."
If numPoints2 is less than or equal to 5, then assign numPoints2 with 5.
Otherwise, output "numPoints2 is greater than 5."
*/



#include <stdio.h>

int main(void) {
   int numPoints1;
   int numPoints2;
   
   scanf("%d", &numPoints1);
   scanf("%d", &numPoints2);

// this statement is going to be an if statement that basically just checks numPoints1 to see ifs its more than or equal to 35 
if (numPoints1 >= 35) { //note that this statement is considered a standalone if statement because it doesnt have an else branch
   printf("numPoints1 is greater than or equal to 35.\n"); // this is the output message 
}

// if-else statement is gonna check numPoints2: note that this if-else block handles both testing if numPoints2 <=5 to update the value and prints the alterntive msg in the else block when its greater than 5 
if (numPoints2 <=5) {
   numPoints2 = 5; //assigns numPoints2 with a 5
}
else {
printf("numPoints2 is greater than 5.\n");
}
   printf("numPoints2 is %d.\n", numPoints2);
   
   return 0;
}