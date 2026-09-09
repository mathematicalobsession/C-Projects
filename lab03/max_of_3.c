/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
Write a program that takes in three integers and outputs the largest value. If the input integers are the same, output the integers' value.
Ex: If the input is:
1 2 3
the output is:
Max of [1, 2, 3] is 3
*/


// code starts 
#include <stdio.h>

int main() {

// first I shall create integer variables to store the user inputs 
int inputNum1;
int inputNum2;
int inputNum3;

// next I shall create a variable that stores the largest of the three user inputs
int largestInput;

// collect and store 3 numerical inputs from the user
scanf("%d %d %d", &inputNum1, &inputNum2, &inputNum3);

// this next part of the code will check if inputNum1 is greater than or equal to inputNum2 and (&&) inputNum3
// if and only if this next line of code is true 
if (inputNum1 >= inputNum2 && inputNum1 >= inputNum3) {
// if its true this next line of code executes 
   largestInput = inputNum1; //inputNum1 is the largest of the three so it gets set to a new name, that is largestInput
}
// so if the condition on line 18 is not true, the code will proceed to check if inputNum2 is bigger than or equal to inputNum1 and (&&) inputNum3
// note that an else-if statement is utilized here, an else-if statement checks a new condition if the preceding if condition turned out to be false
else if (inputNum2 >= inputNum1 && inputNum2 >= inputNum3) {
// if what is written above is true and inputNum2 is the largest number of the three, the following line of code will execute
   largestInput = inputNum2;
}
// if it turns out that neither inputNum1 nor inputNum2 was the largst of the three, through process of elimination we can infer that it is going to be inputNum3 that is the largest of the three and thus we will write an else statement that assigns inputNum3 as the largest value.
// this else statement says "if nothing written above was true, than this will carry out"
else {
   largestInput = inputNum3;
}
// now all that is left to do is print out the largest number according to the templates formatting request above
printf("Max of [%d, %d, %d] is %d\n", inputNum1, inputNum2, inputNum3, largestInput);

   return 0;
}
