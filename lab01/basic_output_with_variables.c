/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)

Platform: zyBooks (Resource)

Prompt: 
Step 1: Output the user's input.
Ex:
Enter integer:
4
You entered: 4

Step 2: Output the input squared and cubed. 
Ex:
Enter integer:
4
You entered: 4
4 squared is 16
And 4 cubed is 64!!

Hint: Compute squared as userNum * userNum. 

Step 3: Get a second user input into userNum2, and output the sum and product.
Ex:
Enter integer:
4
You entered: 4
4 squared is 16
And 4 cubed is 64!!
Enter another integer:
5
4 + 5 is 9
4 * 5 is 20
*/

// CODE STARTS HERE:
#include <stdio.h>

int main(void) {
   int userNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("You entered: %d\n", userNum);
// now i am supposed to square it? '
//professor says put mathematical operations in parenthesis as it is best 
printf("%d squared is %d\n", userNum, (userNum * userNum));
printf("And %d cubed is %d!!\n", userNum, (userNum * userNum * userNum));
// here %d is used and not %f because %f is used for floating point integers (decimals)

int userNum2;
// introducing a new variable to the code 
printf("Enter another integer:\n");

//user now provides us with a second number 
// collecting data, store it in %d, use the & because its collecting integer data from the user 
scanf("%d", &userNum2 );

printf("%d + %d is %d\n", userNum, userNum2, (userNum + userNum2));

// now preform multiplication with provided user input 

printf("%d * %d is %d\n", userNum, userNum2, (userNum * userNum2));
   return 0;
}
