/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)


prompt:
Part 1
Given 4 integers, output their product and their average using integer arithmetic.

Ex: If the input is:

8 10 5 4
the output is:

1600 6

Note: Integer division discards the fraction. Hence the average of 8 10 5 4 is output as 6, not 6.75.

Note: The test cases include four very large input values whose product results in overflow. You do not need to do anything special, but just observe that the output does not represent the correct product (in fact, four positive numbers yield a negative output; wow).

Submit the above for grading. Your program will fail the last test cases (which is expected), until you complete part 2 below.

Part 2
Also output the product and average using floating-point arithmetic.

Output each floating-point value with three digits after the decimal point, which can be achieved as follows:
printf("%0.3lf", yourValue);

Hint: Convert the input values from int to double.

Ex: If the input is 8 10 5 4, the output is:

1600 6
1600.000 6.750

Note that fractions aren't discarded, and that overflow does not occur for the test case with large values.
*/


// CODE STARTS HERE

#include <stdio.h>

int main(void) {
   int userNum1;
   int userNum2;
   int userNum3;
   int userNum4;
   
//PART1//
//********************************************************************************//
//Description: I am being asked to collect 4 integers from the user and then computer their product and 
// average using integer math and then print them. When it comes to integer math, decimals and fractions 
// are totally disregarded and cut off.
//********************************************************************************//
// MATHEMATICS TO BE USED: 
// multiply all the numbers together x * y * z * w
// to compute the average: Average = sum all of numbers/amount of numbers that are summed
// average = num1+num2+num3+num4 / 4
//Comments: 
// variables have been establishes above, now is the time to collect the inegers from the user 
// since we are just doing integers ill use %d and use & to store them in the variables prevviously 
// established above, program will begin with a scanf() to collect input 

scanf("%d %d %d %d", &userNum1, &userNum2, &userNum3, &userNum4); // this collects user input in one shot DONT FORGET THE &!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 
//get the product 
int product;
product = (userNum1 * userNum2 * userNum3 * userNum4);
// output the product 
printf("%d", product);

//get the average 
int average;
average = ((userNum1 + userNum2 + userNum3 + userNum4) / 4);
//output the average
printf(" %d\n", average);
// end of part 1 
///////////////////////////////////////////////////////////////////////////
// start of part 2 
// part 2 wants me to do the same exact thing but this time with floating point arithmetic 
// there is a way to do something called type casting 
// type casting is when you convert one data type into another one. 
// im gonna convert ints into floating poiint so i can carry out floating point arithmetic 


//===================================
// floating points yeild decimals that can only go up to 6 or 7 i think 
// doubles can do decimals that are lik 15-17 AFTER THE .
// i am going to use doubles instead of floats to try and get full credit 


// i think this is called type casting
double userNum1Float = (double)userNum1; // this is supposed to convert the integer into a floating point IN THEORY
// i gotta do the same for the rest of them. 
double userNum2Float = (double)userNum2;
double userNum3Float = (double)userNum3;
double userNum4Float = (double)userNum4;


//now lets calculate the product of our floating point values 

double floatProduct = (userNum1Float * userNum2Float * userNum3Float * userNum4Float);
printf("%0.3lf", floatProduct);

 // now we shall find the floating point average
double floatAverage;
floatAverage = ((userNum1Float + userNum2Float + userNum3Float + userNum4Float) / 4 );

printf(" %0.3lf", floatAverage);
   return 0;
}


// **TERMINATED CODE BELOW**//
// i think this is called type casting
//float userNum1Float = (float)userNum1; // this is supposed to convert the integer into a floating point IN THEORY
// i gotta do the same for the rest of them. 
//float userNum2Float = (float)userNum2;
//float userNum3Float = (float)userNum3;
//float userNum4Float = (float)userNum4;

//now lets calculate the product of our floating point values 

//float floatProduct = (userNum1Float * userNum2Float * userNum3Float * userNum4Float);
//printf("%0.3lf", floatProduct);

 // now we shall find the floating point average
//float floatAverage;
//floatAverage = ((userNum1Float + userNum2Float + userNum3Float + userNum4Float) / 4 );

//printf(" %0.3lf", floatAverage);
//   return 0;
//}
