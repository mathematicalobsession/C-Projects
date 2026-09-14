
/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 
Write a program whose inputs are three integers, and whose output is the smallest of the three values.
Ex: If the input is:
7 15 3
the output is:
3
*/

#include <stdio.h>
int main(void) {
int inputNum1;
int inputNum2;
int inputNum3;
int smallestInput;
   scanf("%d %d %d", &inputNum1, &inputNum2, &inputNum3);

      if (inputNum1<= inputNum2 &&inputNum1 <= inputNum3)
         {
             smallestInput = inputNum1;

         }

            else if (inputNum2 <= inputNum1 && inputNum2 <= inputNum3)
            {
                  smallestInput = inputNum2;
            }

               else 
                  {
                   smallestInput = inputNum3;
                  }
   printf( "%d\n", smallestInput);
   return 0;
}
