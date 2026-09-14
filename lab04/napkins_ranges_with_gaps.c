/*
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
Integer napkinsOrdered is read from input representing the number of napkins. Output:
"Basic container", if the number of napkins is greater than 40 and less than 90.
"Standard container", if the number of napkins is greater than 120 and less than 160.
"Select another amount", otherwise.
End each output with a newline.
*/


#include <stdio.h>

int main(void) {
   int napkinsOrdered;

   scanf("%d", &napkinsOrdered);  

// checks if napkinsOrdered is greater than 40 AND less than 90 
if (napkinsOrdered > 40 && napkinsOrdered < 90) {
   printf("Basic container\n"); //prints if its inside the range of 41 to 89
}

else if (napkinsOrdered > 120 && napkinsOrdered < 160) {
   printf ("Standard container\n"); // prints if its inside the range of 121 to 159
} 
// next lines of code runes if neither of the above conditions was met 
else { 
   printf("Select another amount\n");
}
   return 0;
}