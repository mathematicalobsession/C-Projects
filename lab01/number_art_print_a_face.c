/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Intructor: Jason Polakis (He created this assignment and showed us how to do it in class, but I added the comments)
Platform: zyBooks (Resource)

Prompt: 
Number Art
Write a program that prints out this triangle using the number 1:

   1   
  111  
 11111 
Once you get that working, modify the program to also print out a triangle with a number from user input. For example, if the user enters 2, the triangle should look like this:

   2   
  222  
 22222 
If the user enters 8, the triangle should look like this:

   8   
  888  
 88888 
Print a Face
Write a program that prints out this face:

  xxxxxxx 
 xx     xx
 x  0 0  x
 \   >   /
  \  ~  / 
   \___/ 
Then, modify the program to also print out a version of the face with integer eyes and an integer nose, where the integer values are entered by the user during the program run time. For example, if the user enters 8 7, the second face printed is as follows:

  xxxxxxx 
 xx     xx
 x  8 8  x
 \   7   /
  \  ~  / 
   \___/ 
Make sure to prompt the user for inputs with a descriptive message. This is important when the program is run interactively (which you can do on some, but not all, of the zyLabs throughout the semester). For the example given, the program output (with interlaced input values of 8 and 7) is as follows:

  xxxxxxx 
 xx     xx
 x  0 0  x
 \   >   /
  \  ~  / 
   \___/ 


Enter a number for the eyes: 8
Enter a number for the nose: 7

  xxxxxxx 
 xx     xx
 x  8 8  x
 \   7   /
  \  ~  / 
   \___/ 


*/




#include <stdio.h>

int main() {

printf("   1   \n");
printf("  111  \n");
printf(" 11111 \n");

int x;
// the & says "memory adress of this variable "
scanf("%d",&x);
printf("   %d \n",x);
printf("  %d%d%d  \n",x, x, x);
printf(" %d%d%d%d%d   \n",x, x, x ,x, x);



printf("  xxxxxxx\n");
printf(" xx     xx\n");
printf( " x  0 0  x\n");
// double slash here because when you use a slash the computer someting that signifys that a special character is going to start there 
printf(" \\   >   /\n");
printf("  \\  ~  / \n");
printf("   \\___/ \n");



int userInput1;
int userInput2;

printf("Enter a number or the eyes: \n");
scanf("%d", &userInput1);
printf("Enter a number for the nose: \n");
scanf("%d", &userInput2);



printf("  xxxxxxx\n");
printf(" xx     xx\n");
printf( " x  %d %d  x\n", userInput1, userInput1);
// double slash here because when you use a slash the computer someting that signifys that a special character is going to start there 
printf(" \\   %d   /\n", userInput2);
printf("  \\  ~  / \n");
printf("   \\___/ \n");





   return 0;
}
