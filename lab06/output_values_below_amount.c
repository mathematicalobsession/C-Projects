/* 
Stella Wilcox 
University of Illinois Chicago

Prompt: 
Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Then, get the last value from the input, which indicates a threshold. Output all integers less than or equal to that last threshold value. Assume that the list will always contain less than 20 integers.
Ex: If the input is:
5 50 60 140 200 75 100
the output is:
50,60,75,
The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all integers less than or equal to 100, so the program outputs 50, 60, and 75.
For coding simplicity, follow every output value by a comma, including the last one.
Such functionality is common on sites like Amazon, where a user can filter results.
*/



#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 20;
   int userValues[NUM_ELEMENTS];    // Set of data specified by the user
   int numValues; // How many numbers are coming 
   int threshold; // the max cutoff value 

   // first the program will read in the total amount of numbers in the list 
   scanf("%d", &numValues);

   // read each integer and store it in the array
   // use a for loop
   for (int i=0; i < numValues; ++i) {
      scanf("%d", &userValues[i]);
   }
/* 
THE ABOVE FOR LOOP EXPLAINED: 
1.) int i = 0: // this starts a counter variable i at 0
2.) i < numValues //check if i is less than numValues 
3.) scanf("%d", &userValues[i]) // This reads an integer input from the user and saves it into slot i of the arrow (it doesnt make a new i) for example if i is 0, it saves the number into userValues[0]
scanf("%d", &userValues[i]) takes the number typed by th euser (like 50 or 60) and then saves it inside the array slow userValue[i]
SO IF THE USER TYPES 50, then 
      userValues[0] becomes 50 
      and i becomes 1 (because of ++i)
4.) ++i increment i by 1 (move to the next slot in the array) and repeat step 2 

So like i is just the fslot marker that goes up by 1 each time while userValues[i] holds the actual number typed by the user 
*/

   // anyway so then after that read the threshold value (the last input)
   scanf("%d", &threshold);
   
   // then we have to print all values that are less than or equal to threshold
for (int i=0; i<numValues; ++i) {
   if (userValues[i] <= threshold) {
      printf("%d," ,userValues[i]); // print number followed by a comma

/* 
ABOVE LOOP EXPLAINED:
The loop checks every number in the list and prints only the numbers that fit the limit 
1.) for (int i=0; i<numValues; ++i) 
// This steps through the array slot by slot starting at slow 0. 
2.) if (userValues[i] <= threshold)
//checks if the number in slow i is smaller than or equal to threshold
3.) printf("%d,", userValues[i]);
         If true: prints that number with a comma 
         If false: skips its completely 
 

*/


   }
}
printf("\n");
   return 0;
}

// Resource: Zybooks