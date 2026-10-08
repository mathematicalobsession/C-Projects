/* 
Stella Wilcox 
Jason Polakis
University of Illinois Chicago

Prompt: 
Given a sorted list of integers, output the middle integer. A negative number indicates the end of the input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.
Ex: If the input is:
2 3 4 8 11 -1 
the output is:
Middle item: 4
The maximum number of list values for any test case should not exceed 9. If exceeded, output "Too many numbers".
Hint: First read the data into an array. Then, based on the array's size, find the middle item.
*/ 

#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 9;
   int userValues[NUM_ELEMENTS];    // Set of data specified by the user
   
   // User Values
   int mid; // this is the variable to hold the index of the middle value
   int count=0; // this will track how many numbers are stored 
   int input; // this is a variable that stores the user input 
   scanf("%d", &input); // read in the user input and store it 
   // loop keeps reading until input is negative OR array limit is reached 
   // the while loop always loops at least once 
   while (input >= 0 && count < NUM_ELEMENTS) {
      userValues[count] = input; // this will store the current number into the array
      ++count; //increase the stored count by 1 
      scanf("%d", &input); // read the next ineger in
   }

   // this will be an if statement
   // if input exceeded 9 elements without seeing a negative number first 
   if (input >=0){
      printf("Too many numbers\n"); //output message we were asked to put 
   }
   else { 
      mid = count / 2; //find the middle index using integer division 
      printf("Middle item: %d\n", userValues[mid]);
   }
   return 0;
}

   

   




  // while (input>0 && count<9) **terminated code**
   //{  **terminated code**
  //    userval[count] = input **terminated code**
    //  ++count  **terminated code**

  // } **terminated code**

