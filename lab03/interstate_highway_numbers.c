/*
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

prompt: 
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90. Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.
Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west.
Ex: If the input is:
90
the output is:
I-90 is primary, going east/west.
Ex: If the input is:
290
the output is:
I-290 is auxiliary, serving I-90, going east/west.
Ex: If the input is:
0
or any number not between 1 and 999, the output is:
0 is not a valid interstate highway number. 
Ex: If the input is:
200
the output is:
200 is not a valid interstate highway number. 



*/


// CODE STARTS:

// highways are numbered 1-99 
// odd numbers like 5 and 95 go north/south
// even numbers like 10 and 90 go east west 
// Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits
// An auxiliary highway is a supplemental three-digit numbered route in the United States that connects to a primary (one- or two-digit) mainline Interstate to serve urban areas, loops, or specific destinations
// Thus, I-405 services I-5, and I-290 services I-90.

#include <stdio.h>

int main(void) {
   int highwayNumber;
   
   scanf("%d", &highwayNumber); 

// create if statement that checks if the number is less than 100
// if that true then create a print statement that assigns it as a primary 
// embedded within that create a code that checks if its odd or even probably using a boolian expresssion to do so 
// else check if the number is greater than 99
// if thats true create a print statement that basically says that its an auxilary highway 
// // check if its odd or even
// say that its north/sourth if its odd
// say that its east/west if its even 
// i have to nest these 


// first check to see if its a primary highway, this is only valid for numbers 1-99
// moreover this can be done in one sweep.

// so this is saying "the highway number needs to be greater than or equal to 1 AND (&&) the highway number has to be less than or equal to 99" this will ensure the input is beteen 1-99 for this next statement to execute 
if (highwayNumber >= 1 && highwayNumber <= 99) { //if condition 1 is true this next part executes 
// check if the primary is even or odd
   if (highwayNumber % 2 == 0) {
      printf("I-%d is primary, going east/west.\n", highwayNumber);
   } else {
      printf("I-%d is primary, going north/south.\n", highwayNumber);
   }
}
// in this next part the code will check if the usr input is an axiliary highway
// the constraints here are as follows: the number needs to be inbetween 100 and 999 and it can not end in 00, (no 200, no 300, no 400, etc as these are not allowed.)

//so this next line is like "ok if above cant be applied, then or else"
// "or else if (or else, if) the highway number needs to be greater than or equal to 100 AND (&&) the highwaynumber needs to be less than or equal to 999 AND (&&) the highway numbers remainder when divided by 100 can not equal zero,"
// the reason there is division by 100 is because when we do "highwayNumber % 100" its like taking away the 100s digit to look at just the last two numbers, so for example if the last two digits are 00 (like in 500), the primary highway would be 0 and I-0 is not a real highway so when highwayNumber !=0 is put it means that it can not equal 0.
else if (highwayNumber >= 100 && highwayNumber <= 999 && highwayNumber % 100 !=0) {
// modulo can be used to calculate the primary route it serves (For Example: 505 would become 5 since 505%100= .05)
int primaryHighway;
primaryHighway = highwayNumber % 100;
if (highwayNumber % 2 == 0) { //check if its odd or even 
   printf("I-%d is auxiliary, serving I-%d, going east/west.", highwayNumber, primaryHighway);
} else 
printf("I-%d is auxiliary, serving I-%d, going north/south.", highwayNumber, primaryHighway);

}
// this next part of the codee has to account for the invalid entries 
// that is things like: (0, 200, 1000 and more, it also needs to banish negative numbers)
else {
   printf("%d is not a valid interstate highway number.", highwayNumber);
   }


   return 0;
}


//====================================================================================================
// ATTEMPt 2 **TERMINATED CODE**

//if (highwayNumber < 100) {
   // executes if condition1 is true 
  // if (highwayNumber % 2 == 0) {
      // executes if both condition1 and condition2 are true 
    //  printf("I-%d is primary, going east/west.", highwayNumber);
   //} else { 
      // executes if condition1 is true but condition2 is false
   //   printf("I-%d is primary going north/south.", highwayNumber); 
 //  }
//} else  
// executes if condition1 is false
// this is where I create a new nested if-else structure for the auxilary sitution? 
  // if (highwayNumber > 100){ //condition 1
      //executes if condition 1 is true 
    //  if (highwayNumber % 2 == 0) {
         //executes if both condition1 and condition2 are true 
    //     printf("I-%d is auxiliary, serving I-90, going east/west.", highwayNumber);
      //} else {
         //executes if condition1 is true but condition2 is false 
        // printf("I-%d is auxiliary going north/south", highwayNumber);
 //     }
  // } else { 
      //executes if condition1 is false 
    //     if (highwayNumber == 0) {
      //printf("%d is not a valid interstate highway number.", highwayNumber);
       //  if (highwayNumber == 200) { 
      //printf("%d is not a valid interstate highway nunber.", highwayNumber);
   
//   }
//}



  // return 0;
//}

//==================================================================================
// ATTEMPT 1 **TERMINATED CODE** 
//  if (highwayNumber < 100) { 
      // if its less than 100 check if the number is even or odd 
  //    if (highwayNumber % 2 == 0); // use the modulo operator to check if the highway number is even or odd, upon division by 2 and checking the decimal, if the decmal is .0 its even if the decimal point is any non zero number then its odd. 
  //    printf("I- %d is primary going east/west", highwayNumber);
  //    } else 
//      printf("I-%d is primary going north/south");
   //} else }

  // if (highwayNumber > 100) { 
  //    if (highwayNumber % 2 == 0); // check if its odd or even 
  //    printf("I-%d is auxilary going east/west", highwayNumber);
   //      } else } 
  //          printf("I-%d is auxilary going north/south");

   //if (highwayNumber == 0) {
  //    printf("%d is not a valid interstate highway number.", highwayNumber);
  // if (highwayNumber == 200) { 
  //    printf("%d is not a valid interstate highway nunber.", highwayNumber);
   
   
   //}



   



// check if number is even or odd probably with a boolian statement 




