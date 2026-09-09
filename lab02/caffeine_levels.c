/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
A half-life is the amount of time it takes for a substance or entity to fall to half its original value. Caffeine has a half-life of about 6 hours in humans. Given caffeine amount (in mg) as input, output the caffeine level after 6, 12, and 24 hours.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:

100
the output is:

After 6 hours: 50.00 mg
After 12 hours: 25.00 mg
After 24 hours: 6.25 mg

Note: A cup of coffee has about 100 mg. A soda has about 40 mg. An "energy" drink (a misnomer) has between 100 mg and 200 mg.
*/

// CODE STARTS:
// we can intruct print f to point after 2 decimal points 

// half life every six hours you divide by 2 
// divide inout by 2 after 6 hours 
// we first need delate the variables
// use double since we use decimal
// when we make lots of variables we wast memoryy 
// we want to save resources 

#include <stdio.h>



int main(void) {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   
   scanf("%lf", &caffeineMg);

printf("After 6 hours: %.2lf mg\n", caffeineMg/2);
printf("After 12 hours: %.2lf mg\n", caffeineMg/4);
printf("After 24 hours: %.2lf mg\n", caffeineMg/16);


   return 0;
}
