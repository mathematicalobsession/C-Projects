/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes longer to rotate around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year are:
1) The year must be divisible by 4
2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400; therefore, both 1700 and 1800 are not leap years
Some example leap years are 1600, 1712, and 2016.
Write a program that takes in a year and determines whether that year is a leap year.
Ex: If the input is 1712, the output is:
1712 - leap year
Ex: If the input is 1913, the output is:
1913 - not a leap year

*/



// CODE STARTS

#include <stdio.h>
#include <stdbool.h> // include the library that lets us ue boolian 

int main(void) {
   int inputYear;
   bool isLeapYear = false; //create a boolean variable (true/false) and set it to be false by default 
   
   scanf("%d", &inputYear); //collect user input 
// the first thing that the program needs to do is to check to see if the year is a centurary year (like 1700, 1800, 1900, 2000)
if (inputYear % 100 == 0) { //the reason that the modelo operator divide it by 100 and checks the remainder is because any year enidng in 00, like for example 1700 or 1800 will divide by 100 with zero remainder, which is going to reveal to us that the year is a centuary year
// the next thing is centuary years have to be evenly divisable by 400 to be a leap year
   // the following if function will only execute if the abovecondition is true 
   if (inputYear % 400 == 0) {
      isLeapYear = true; // this means that the entry is divisable by 400 and thus it is infact a leap year
} else { //if this is not true the next line of code executes assigning a false value to the boolian 
   isLeapYear = false; // this means that its not divisable by 400, so its not a leap year      
   }
// this next part executes if condition one is false 
// so like for all other numbers basically (i think?)
     } else { // executes if condition1 isnt true 
// for all other years its gonna check to see if its divisable by 400 with no remainderrs using modelo
if (inputYear % 4 == 0) {
   isLeapYear = true; // this assigns the boolian a true value if and only if its divisable by 4 evenly with no remainder 
} else { // in the case that there is a remainder after being divided by 4 the value gets assigned as false as shown below 
   isLeapYear = false; // its not divisable by four and thus its not a leap year.
}
}

// this next section of the code has to do with wahts printed and shown on screen.
// the print depends on whether or not a the leap year is true or false 
if (isLeapYear == true) {
// if its true, then print that it is a leap year
printf("%d - leap year\n", inputYear);
} else { 
// If false, print that it is not a leap year
printf("%d - not a leap year\n", inputYear);
}

// end the program

   return 0;
}



///////// HOW DO NESTED FUNCTIONS EVEN WORK?!!?!?! ////////////////
// THE LAYOUT: (used for reference)
// if (condition1) {
// // this line of code executes if condition 1 is true
//    if (condition2) {
//      // executes if both condition1 and condition2 are true 
//    } else { 
//        // executes if condition1 is true but condition2 is false
//    }
// } else { 
//      // Executes if condition1 is false 
// }    
// // this line of code executes if both condition1 and condition2 are true
//
//
//
//
//
//