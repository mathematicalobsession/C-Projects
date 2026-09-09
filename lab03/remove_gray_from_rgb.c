/* 
Name: Stella Wilcox 
Date: 09/08/2026
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

Prompt:
Summary: Given integer values for red, green, and blue, subtract the gray from each value.
Computers represent color by combining the sub-colors red, green, and blue (rgb). 
Each sub-color's value can range from 0 to 255. 
Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, 
and (40, 40, 40) is a dark gray. (130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. 
(In other words, equal amounts of red, green, blue yield gray).
Given values for red, green, and blue, remove the gray part.

Ex: If the input is:
130 50 130
the output is:
80 0 80
Find the smallest value, and then subtract it from all three values, thus removing the gray.
Note: This page converts rgb values into colors.
Link: https://www.mathsisfun.com/hexadecimal-decimal-colors.html


*/

// CODE STARTS: 

// What am I being asked to do? 
// I have to find the smallest number amoung the three given values for red, green and blue then I have to subtract the smallest number from each of the original values to obtain the final answer
// The problem gives a custom color in the example its (130, 50, 130), the smallest number of the three is 50.
// it wants me to strip away the gray part to reveal the true colors underneath
// to do this i subtract 50 from each
// red: 130 - 50
// green: 50 - 50 = 0 
// blue: 130 - 50 = 80
// note here: (x,y,z) values correspond to (red, green, blue) RGB

#include <stdio.h>

int main(void) {

// start by initializing variables that the user will input 
int red;
int green;
int blue;
// then creat a variable for the smallest of the three 
int smallestValue;

// use scanf to collect values from the user 
scanf("%d %d %d", &red, &green, &blue);

// printf("%d %d %d", red, green, blue); **TERMINATED CODE FOR TESTING ONLY**

// next I have to create a code that checks all of the input values to find the smallest value, 
// I can do this with if-else statements 
// the next line of code will check to see if the input value for red is less than or equal to blue AND (&&) green
if (red <= green && red <= blue) {
// if above is true the next line executes 
   smallestValue = red; //if above is true then red is the smallest value and it gets set to a new name
}
// if the conditions above are not true the program will proceed to check if green is less than or equal to red and (&&) blue
// note that an else-if statement is utilized here, an else-if statement checks a new condition if the preceding if condition turned out to be false
else if (green <= red && green <= blue ) {
   // if what is written above is true that means that green is the smallest number of the 3, it gets assigned a new value accordingly
   smallestValue = green;
} 
// if it turns out that neither red nor green was the smallest that must mean that blue is the smallest 
// this next statement says "okay, well if nothing above was true, then this next line of code will carry out that assigns blue as the smallest value"
else { 
   smallestValue = blue;
}

// printf("%d", smallestValue); // **TERMINATED CODE FOR TESTING PURPOSES ONLY**

// Okay now I have to write code that carries out subtraction with each variable, that is subtracting the smallest value from each input value. 


// im gonna establish new variables (integers)

int newRed;
int newGreen;
int newBlue; 

// carry out subtraction of the smallest value for each
newRed = (red - smallestValue);
newGreen = (green - smallestValue);
newBlue = (blue - smallestValue);

printf("%d %d %d", newRed, newGreen, newBlue);
// gray has been removed
   return 0;
}