/********************************************************************************************************************** 
Name: Stella Wilcox 
Date: 09/09/2026
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

Prompt:
Write a program that takes a date as input and outputs the date's season in the northern hemisphere. The input is a string to represent the month and an int to represent the day.

Ex: If the input is:
April 11
the output is:
Spring
In addition, check if the string and int are valid (an actual month and day).
Ex: If the input is:
Blue 65 
the output is:
Invalid 

[DATA BANK]
The dates for each season in the northern hemisphere are:
Spring: March 20 - June 20
Summer: June 21 - September 21
Autumn: September 22 - December 20
Winter: December 21 - March 19
**********************************************************************************************************************/

#include <stdio.h> // c library stuff
#include <string.h> // imports in string tools so we can use "strcmp" to compare words

int main(void) {
   char inputMonth[50]; // this creates a text variable that has 50 characters worth of space to hold the string (array) that the user will type 
   int inputDay; // establish the variable
   
   scanf("%s", inputMonth); // collect string input from the user, the month in this case, note that no & is needd for a string  
   scanf("%d", &inputDay); // collect integer data from the user, in this case the day, stores it in memory with "&"

  // Now create a giant nested if-else function that use string manipulation tooos namely strcmp to see what the input is month by month and day by day 

  if (strcmp(inputMonth, "January") == 0) { //checks if the input month is January
      // executes if and only if the month is January
      if (inputDay >= 1 && inputDay <= 31) { //checks if the day is between 1-31 (the valid days for the month of january)
         // executes if and only if the month is January AND the day is valid for january that is between 1-31
         printf("Winter\n");
      } else { 
         //executes if the month was January, BUT the day was invalid in that it was a number that was not within the domain of 1-31
         printf("Invalid\n"); 
      }
  } 
  // next there will be an else if statement, its going to say "if not that check for this" within it will be another if-else structure 
  else if (strcmp(inputMonth, "February")==0){ //checks if month is February
  // next line of code will execute if the month is February (AND january was fALSE)
      if (inputDay >= 1 && inputDay <= 29) { //checks if the day is inbetween 1-29 which are the valid days for february 
      // next line of code executes if and only if the month is february AND the day is valid (1-29)
      printf("Winter\n");
      } else { 
// next line of code will execute if the month is february but the day is not valid 
         printf("Invalid\n");

      }
  }
    // AGAIN  there will be an else if statement, its going to say "if not that check for this" within it will be another if-else structure 
   else if (strcmp(inputMonth, "March")==0) { //checks if the month is march
   // next line of code executes if "March" is a match with inputMonth AND January/February were fALSE
      if (inputDay >= 1 && inputDay <= 31) { // checks if the days are valid for March that is between 1-31 
// executes if the month is Marhc and the day is valid being between 1-31 
      // have to implement a cut off/starting point for march 19th as that is when spring will begin 
         if (inputDay <=19) {  //checking if day is 19 or earlier 
      // next line of code will execute if the month is March, the day is valid and the day is less than or equal to 19
            printf("Winter\n");

         } else {
         // Next line executes if month is Maarch, day is valid but the day is greater than 19, in other words day <=19 is false (the day is between 20-31)
            printf("Spring\n");
         } 
      } else { 
// execute if month is march but the day is invalid (not between the domain of 1-31)
         printf("Invalid\n");
      }
   }
// now do april
   else if (strcmp(inputMonth, "April")==0) { // checking to see if the input month is april
   // executes if april matches
      if (inputDay >= 1 && inputDay <= 30) { // checks if day is between 1 and 30
      // executes if the month is april and the day is valid in that its between 1 and 30
      printf("Spring\n");
      } else {
// executes if the month is april but the day is invalid
         printf("Invalid\n");
      }
   }
   // now do may 
   else if (strcmp(inputMonth, "May")==0) { //checks if the month is may 
   // executes if may is a match 
      if (inputDay >= 1 && inputDay <= 31) { //checks if the day is in between 1 and 31 
      // executes if the month is may AND the day is within mays parameters that is between 1-31 
      printf("Spring\n");

      } else {
         // next line of code executes if the month is may, but the day is invalid 
         printf("Invalid\n");
      }
   }

// now do june
   else if (strcmp(inputMonth, "June") ==0 ) { //checking if the inputMonth matches the array "June"
   // executes if "June" is an exact match
      if (inputDay >= 1 && inputDay <= 30) {  //checks to see if the inputted day is within the domain of 1 and 30
      // executes if month is june AND day is valid (1-30)
         if (inputDay <= 20) { // checks if the day is 20 or earlier 
         // executes if the month is June, the day is valid and the day is <= 20 
            printf("Spring\n");
         } else { 
            // next line of code will execute if month is june, day is valid but the day <=20 is false (meaning the day has to be betqwwn 21-30)
            printf("Summer\n");
         }

      } else { 
// code will execute if the month is june but the day is not valid 
         printf("Invalid\n");
      }
   }
   // now do July 
   else if (strcmp(inputMonth, "July") == 0){ //checks if the month is the same as "July" 
   // code below will eexecute if july is a match 
      if (inputDay >= 1 && inputDay <= 31) { //checking if the day is between 1-31
      // following code executes if the day is between 1-31 
         printf("Summer\n");
      } else {
         // executes if month is July but the day is not valid then 
         printf("Invalid\n");
      
      }
   }

   // now do auguest 
   else if (strcmp(inputMonth, "August")==0) { //checks if the month is "August"
   // following code will execute if august is a match 
      if (inputDay >= 1 && inputDay <=31) { // checks if the day is between augusts parameters that is days between 1-31 
      // executes if month is August AND day is valid (1-31)
         printf("Summer\n");

      } else {
         // executes if the month is august but the day is invalid
         printf("Invalid\n");
      }
   }
   // now do september 
   else if (strcmp(inputMonth, "September") == 0) { //checking if month inputtered matches "September"
   // if it does then the next line of code executes 
      if (inputDay >= 1 && inputDay <= 30 ) { //checks to see that day is between 1 and 30  
      // Executes if month is september and day is valid (1-30)
         if (inputDay <= 21) { // checks if day is 21 or earlier because the season changes 
            // executes if month is september day is valid and day <= 20 
            printf("Summer\n");
      } else { 
            printf("Autumn\n");

      }

      } else { 
            // executes if month is september but the day inputted is invalid 
            printf("Invalid\n");
         
         
      }
   }
   // now do october 
   else if (strcmp(inputMonth, "October")==0) { // checking if the month is october 
      //executes if october is a perfect match 
      if (inputDay >= 1 && inputDay <= 31) { // checks if day is between 1 and 31 
   // executes if month is october and the day is valid (1-31)
          printf("Autumn\n");


      } else { 
// executes if month is october but day is invalid
         printf("Invalid\n");
      

      }
   }
   // now do november
   else if (strcmp(inputMonth, "November")==0) { //checks if month is november
   // executes if novermber matches 
      if (inputDay >= 1 && inputDay <= 30) {  //checks if day is between 1 and 30 
// executes if month is November AND day is valid (1-30) 
         printf("Autumn\n");

      } else { 
// executes if the month is november but the day is invalid 
         printf("Invalid\n");

      }
   }

   // now do december 
   else if (strcmp(inputMonth, "December")==0) { //checks if the month is December 
      //executes if december matches 
      if (inputDay >= 1 && inputDay <= 31) { //checks if day is between 1 and 31 
      // executes if the month is decemeber and the day is valid (1-31)
         if (inputDay <=21) { // put contraint for season chance, checks if day is 20 or earlier 
         // executes if month is decemeber, day is valid and day <=21 
         printf("Autumn\n");
         } else { 
// executes if month is december, day is valid, but day <= 20 is false  (meaning day is 21-31)
            printf("Winter\n");
         }

      } else { 
// executes if month is december, but day is no valid 
         printf("Invalid\n");
      }

   }
   else { 
      // executes if all if and if else condition are false and nothing matches 
      printf("Invalid\n"); 

   }

   return 0;
}
