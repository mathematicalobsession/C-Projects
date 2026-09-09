/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
2.25 LAB: Using math functions
Prompt: 
The input gives three floating-point numbers x, y, and z.

Output x^z, x^y^2, the absolute value of y, and the square root of (xy)z.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:
5.0 6.5 3.2
the output is:
172.47 340002948455826440449068892160.00 6.50 262.43

*/

// code starts here 

#include <stdio.h>

// I think I have to include the math libraries 
#include <math.h>

// so basically these variables are established as doubles so they can be decimals 
int main(void) {
   double x;
   double y;
   double z;
//In C, the double data type is used to store double-precision floating-point numbers, which can represent real numbers with decimal points and much higher precision than float.
// This is a situation where you have to enter in all of the values in one shot and seperate each of them with spaces 
// When storing a double you have to store it as %lf it stands for long float.
scanf("%lf %lf %lf", &x, &y, &z);
// I have to do this in a way that does reassign values to the given variables upon carrying out functions 
// the first one is straighforward i think? 
// pow(x,y) = x^y

// make result1 a thing to avoid reassigning variables 
double result1; // incase result 1 is a decimal
result1 = pow(x,z);

// now I can do result2 i think 
// I want x^y^2 so I will do this in the simple way I know how 
double result2_calculation; // double incase its a decimal 
double result2_complete;
// REMEMBER EXPONENT TOWERS ARE CALCULATED FROM TOP TO BOTTOM
result2_calculation = pow(y, 2);
result2_complete = pow(x,result2_calculation);
//Round to two decimal places

// Now I have to do the absolute value of y
// fabs(x) outputs the absolute value of x 
double result3; 
result3 = fabs(y);  

// now I must do (xy)^z 
double result4_1;
double result4_2;
result4_1 = (x * y);
result4_2 = pow(result4_1,z);

// now I must take the square root of it 
// sqrt(x) takes the square root of x so Ill do this
double result4_final;
result4_final = sqrt(result4_2);

printf("%0.2lf ", result1); // PRINTING FIRST RESULT ROUNDED TO TWO DECIMAL PLACES
printf("%0.2lf ", result2_complete); // PRINTING SECOND RESULT ROUNDED TO TWO DECIMAL PLACES
printf("%0.2lf ", result3); // printing third result to two decimal places 
printf("%0.2lf", result4_final); // printing 4th result to two decimal places.

// if ur reading this hi. 
   return 0;
}
