/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
2.26 LAB: Phone number breakdown
Prompt: 
Given a long long integer representing a 10-digit phone number, output the area code, prefix, and line number using the format (800) 555-1212.
Ex: If the input is:
8005551212
the output is:
(800) 555-1212
Hint: Use the modulo operator (%) to get the desired rightmost digits. Ex: The rightmost 2 digits of 572 is gotten by 572 % 100, which is 72.
Hint: Use / to shift right by the desired amount. Ex: Shifting 572 right by 2 digits is done by 572 / 100, which yields 5. (Recall integer division discards the fraction).
For simplicity, assume any part starts with a non-zero digit. So 0119998888 is not allowed.
*/



// CODE STARTS HERE:

////THE GAME PLAN
// So i am being tasked with taking this large phone number and segmenting it into 3 parts
// that way I can print it out looking like a normal phone number 
// 8005551212 ----> (800) 555-1212
// Q: What is long long? 
// A: long long is a datatype that is used for integers that is expected to exceed 2 billion
// printf() and scanf() uses the %lld to specift a long long term
// I am hinted with using the modula operator (%) which is supposed to give me the remainders of a division problem instead of a regular answer 
// the prefix is the middle part of the number i think

#include <stdio.h>

int main(void) {
   long long phoneNumber;
   /* Add more variables as needed */
   
  // printf("Enter in a 10-digit number: "); **TERMINATED CODE (FOR TESTING)**
   scanf("%lld",  &phoneNumber); // take the 10 digit long long number and store it in memory 

   // now I have to decontruct the 10 digit number that was given. In segments of 3? (xxx) xxx-xxxx
   // the hint says to use modulo operator, which memans we divide it, disregard the result and take the remainder. 
   // but what can we divide it by to get the final four digits (1212) as the remainder? 
   // This is base-10 math (division by powers of ten results each zero will shift the place value by 1 digit)
   // if such is the case then division by 10 shifts the decimal point once to the left
   //division by 100 (10^2) shifts the decimal point to the left 2 places 
   // division by 1000(10^3) shifts the decimal point to the left 3 places 
   // and division by 10000(10^4) shifts the decimal point to the right 4 places, leaving us with the remainder of exactly 4 digits, thats our .1212
   // so i need to do 8005551212/10^4 aka 8005551212/10000 to get the result of 800555.1212
   // but that .1212 remainder is exactly what we need so i think the key here is to do this

   long long lastfour;
   lastfour = (phoneNumber % 10000); //this shaves all of the numbers except the last 4
//   printf("%lld \n", lastfour); **TERMINATED CODE (FOR TESTING)**
// last part stored here 


   // now I shall isolate the middle part of the phone number 

   long long lastfourRemoved;
   lastfourRemoved = (phoneNumber / 10000); // removal of the last four digits 
   // printf("%lld \n", lastfourRemoved); **TERMINATED CODE (FOR TESTING)**

long long isolatedMiddle;
isolatedMiddle = (lastfourRemoved % 1000); // middle part stored here 
//printf("%lld \n", isolatedMiddle); **TERMINATED CODE (FOR TESTING)**

long long firstThree;
firstThree = (lastfourRemoved / 1000); // first part stored here 
// printf("%lld", firstThree); **TERMINATED CODE (FOR TESTING)**

// Notes for me 
// first part: firstThree
// second part: isolatedMiddle
// third part: lastfour

// Now in theory i should be able to contruct some proper formatting with a template (xxx) xxx-xxxx

printf("(");
printf("%lld", firstThree);
printf(") ");
printf("%lld", isolatedMiddle);
printf("-");
printf("%lld", lastfour);

   return 0;
}
