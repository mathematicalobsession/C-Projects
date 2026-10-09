/*
Name: Stella Wilcox
University of Illinois at Chicago 
C/C++ Programming (CS107)
Resource: ZyBooks
Prompt:
Write a function MaxMagnitude() with three integer parameters that returns the largest magnitude value. Use the function in the main program that takes three integer inputs and outputs the largest magnitude value.
Ex: If the inputs are:
5 7 9
function MaxMagnitude() returns and the main program outputs:
9
Ex: If the inputs are:
-17 -8 -2
function MaxMagnitude() returns and the main program outputs:
-17
Note: The function does not just return the largest value, which for -17 -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.
Your program must define and call a function:
int MaxMagnitude(int userVal1, int userVal2, int userVal3)
*/


#include <stdio.h>
#include <stdlib.h>

// This function recieves three integers
// it will return the original number that is farthest from zero.
int MaxMagnitude(int userVal1, int userVal2, int userVal3){
   // begin by choosing the first number as our best answer so far 
   int largest = userVal1; 
// compare the second number's distance from zero 
// with the current answer's distance from zero. 
// check the absolute value aswell 
if (abs(userVal2) > abs(largest)) {
// The second number is farther away, so it gets picked.
// Save the Original number so its sign shall stay the same
largest = userVal2;
}
// now compare the third number with the best answer so far 
if (abs(userVal3) > abs(largest)) { 

   // the third number is farther away, so pick it 
   largest = userVal3;
}
// send the choesen number back to where the function was origianlly called 
return largest;
}
// end of MaxMagnitude 



   int main(void) {

// declare variables that will hold users numbers 

int num1;
int num2;
int num3;
// read three integers and store one in each variable 
// each %d reads an integer 
// each & tells scanf where to store that integer in a box 
scanf("%d %d %d", &num1, &num2, &num3);

// make a variable to hold the answer. 
int answer; 

// give the three numbers to the function 
// store the number it sends back in answer 
answer = MaxMagnitude(num1, num2, num3);

//print the answer, followed by newline 

printf("%d\n", answer);


   return 0;
}
