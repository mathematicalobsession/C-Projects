/*
Name: Stella Wilcox
University of Illinois at Chicago 
C/C++ Programming (CS107)
Resource: ZyBooks
Prompt:
A pedometer treats walking 1 step as walking 2.5 feet. Define a function named FeetToSteps that takes a double as a parameter, representing the number of feet walked, and returns the number of steps walked as an integer by type casting. Then, write a main program that reads the number of feet walked as an input, calls function FeetToSteps() with the input as an argument, and outputs the number of steps returned from FeetToSteps().
Use floating-point arithmetic to perform the conversion.
Note: Type casting a double to an integer may affect the result's accuracy.
Ex: If the input is:
150.5
the output is:
60
The program must define and call a function:
int FeetToSteps(double userFeet)
*/

#include <stdio.h>

//define the function before the main// int means that this function will end back a whole number 
// userFeet holds the number of feet passed into the function 
// doule means userFeet can contain a decimal 
int FeetToSteps(double userFeet){

   // store the answer to the division, including its decimal part
   double steps;
   steps = userFeet / 2.5;

   // (int) converts the answer to an integer type casting??? 
   // it removes the decimal part (everything to the right of the decimal point so 88.8 becomes 88)
   // return send s that whole number back to were we called the funcion 
   return (int)steps;
}
// that concludes the function FeetToSteps 

int main(void) {

// Store the feet entered by the user. 
// use doube because the input could be a decimal like 88.8
double feet;
// store the whole number of steps we get back. 
int totalSteps;
// read the users number 
// %lf tells scanf to read in a double 
// &feet tells scanf where to store that number. 
scanf("%lf", &feet);

// Call our the functio and give it the value stored in feet.
// save the answers it returns in the variable 'totalSteps' 
totalSteps = FeetToSteps(feet);

// Print the integer answer 
//%d prints an integer and \n starts a new line 
printf("%d\n", totalSteps);
   return 0;
}
