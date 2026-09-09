/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
2.24 LAB: Expression for calories burned during workout
The following equation estimates the average calories burned for a person when exercising, which is based on a scientific journal article
Source: https://www.tandfonline.com/doi/abs/10.1080/02640410470001730089
Mathematical Operation:
Calories = (age x 0.2757 + weight x 0.03295 + HeartRate x 1.0781 - 75.4991) x Time / 8.368

Write a program using inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), respectively. Output the average calories burned for a person.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:

49 155 148 60
the output is:

Calories: 736.21 calories

*/
// code starts





#include <stdio.h>

int main(void) {

//int creates a variable that holds a whole number 
int age; 
int weight; 
int heartRate;
int time;
// double for calories sverything else is an integer 
//printf("How old are you? "); **TERMINATED CODE**
scanf("%d", &age);
//printf("How much do you weigh? "); **TERMINATED CODE**
scanf("%d", &weight);
//printf("What is your heart rate? "); **TERMINATED CODE**
scanf("%d", &heartRate);
//printf("What is the time? "); **TERMINATED CODE**
scanf("%d", &time); 

// so since calories is going to likely be a decimal point instead of using int, I will use double 
double calories;
// now ill do the mathematical operation I think 
calories = (((age * 0.2757) + (weight * 0.03295) + (heartRate * 1.0781) - 75.4991) * time / 8.368);

printf("Calories: ");
printf("%0.2lf", calories);
printf(" calories");



   return 0;
}
