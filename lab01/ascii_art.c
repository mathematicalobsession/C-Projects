/* 
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt: 


Step 1: Output this tree. 
   *
  ***
 *****
*******
  ***

Step 2: Below the tree (with two blank lines), output this cat. 
/\   /\
  o o
 =   =
  ---

Hint: In a string, a backslash \ acts as an escape character, used for special characters like newline \n. So, to print an actual backslash, escape that backslash by prepending another backslash. 
Ex: The following prints a single backslash: printf("\\")

*/

#include <stdio.h>

int main(void) {
   // Draw tree
   printf("   *\n");
   printf("  ***\n");
   printf(" *****\n");
   printf("*******\n");
   printf("  ***\n\n\n");
   // if you are reading this hi 



   printf("/\\   /\\\n"); 
   printf("  o o\n");
   printf(" =   =\n");
   printf("  ---\n");
   return 0;
}