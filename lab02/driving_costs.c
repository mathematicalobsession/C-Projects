/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
Driving is expensive. Write a program with a car's gas mileage (miles/gallon) and the cost of gas (dollars/gallon) as floating-point input, and output the gas cost for 20 miles, 75 miles, and 500 miles.
Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);
Ex: If the input is:
25.0 3.1599
where the gas mileage is 25.0 miles/gallon and the cost of gas is $3.1599/gallon, the output is:
2.53 9.48 63.20
Note: Real per-mile cost would also include maintenance and depreciation.
*/

// Code Starts

// WHAT AM I BEING ASKED TO DO? 
// The prompt taks me to write a program that takes in two numbers the first number will be the car's gas milege (miles per gallon) 
// and the second number is the price of gas per gallon.
// I am supposed to write a program that calculates the total cost of driving three specified distances
// namely 20 miles, 75 miles, and 500 miles. The results are supposed to be printed to two decimal places


// ****MATHEMATICAL RELATIONSHIPS THAT ARE TO BE EMBEDDDED INTO THE PROGRAM**** // 
// GALLONS CONSUMED: GALLONS = DISTANCE / MILES PER GALLON 
// TOTAL COST: COST = GALLONS * COST PER GALLON 
// since gallons shows up twice in both equations we can substitute it into the second equation 
// cost = (distance/miles per gallon) * cost per gallon 
// ALL IN ONE: COST = (DISTANCE/MILES PER GALLON) X COST PER GALLON

#include <stdio.h>

int main(void) {

// I will begin with the declaration of variables, since im told the inputs need to be floating point ill use double instead of int
//establish variable types, data specifier ? 
double milesPergallon; // hpw many miles the car gets per gallon 
double costPergallon; // how much each gallon of fuel will cost 


// now the progra will collect user input 
// printf("How many miles per gallon does your car get? \n"); **TERMINATED CODE**
// "double" calls for the usuage of %lf (long float) an since its a number the & will be used to tell us where in memory it gets stored 
scanf("%lf", &milesPergallon);
//printf("How much does your gas cost per gallon? \n"); **TERMINATED CODE**
scanf("%lf", &costPergallon);

// calculate how much money for user to drive 20 miles. 
// math: cost = (distance/miles per gallon) * cost per gallon
double costFor20miles; 
costFor20miles = ((20 / milesPergallon) * costPergallon);
// calculate how much money for user to drive 75mi 
double costFor75miles;
costFor75miles = ((75/milesPergallon) *costPergallon);
//calculate how how much money for the user to drive 500 miles 
double costFor500miles; 
costFor500miles = ((500/milesPergallon)*costPergallon);

printf("%0.2lf %0.2lf %0.2lf",costFor20miles, costFor75miles, costFor500miles);


   return 0;
}
