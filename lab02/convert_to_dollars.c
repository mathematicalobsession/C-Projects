/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
Given three input values representing counts of nickels, dimes, and quarters, output the total amount as dollars and cents.

Output each floating-point value with two digits after the decimal point using the following statement:
printf("Amount: $%0.2lf", dollars);

Ex: If the input is:

3 1 4
where 3 is the number of nickels (at $0.05 each), 1 is the number of dimes (at $0.10 each), and 4 is the number of quarters (at $0.25 each), the output is:

Amount: $1.25

For simplicity, assume input is non-negative.
*/

// code starts





//interesting mathematical operations will take place. 
#include <stdio.h>

int main() {

double userNickles;
double userDimes; 
double userQuarters;

// collect user data 

scanf("%lf %lf %lf", &userNickles, &userDimes, &userQuarters);

double convertUserNickles;
double convertUserDimes; 
double convertUserQuarters;
convertUserNickles = (userNickles * 0.05);
convertUserDimes = (userDimes * 0.10);
convertUserQuarters = (userQuarters * 0.25);

double totalMoney;
totalMoney = (convertUserNickles + convertUserDimes + convertUserQuarters);


printf("Amount: $%0.2lf", totalMoney);
   return 0;
}
