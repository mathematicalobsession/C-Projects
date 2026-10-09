





#include <stdio.h>

int main() { 
    int num1, num2, num3; 
    printf("Please enter three numbers and I shall calculate the average.\n");
    scanf("%d, %d, %d", &num1, &num2, &num3);
   // printf("Average: %lf", (num1 + num2 + num3)/3); **THIS WOULD BE THE LINE GIVING THE ERROR**
    printf("Average: %lf", (double)(num1 + num2 + num3)/3); // FIXED LINE
return 0;
}


// to compile in terminal run: gcc -o average_issue_with_fix average_issue_with_fix.c
// ./average_issue_with_fix
// make sure to put in the input 

// HOW TO SEE THE ERROR:
// Ask gcc (the compiler) to report the warnings with the following command
// gcc -Wall -Wextra -Wformat=2 -o average_issue_with_fix average_issue_with_fix.c

// Analyzing the error: 
// We can see that format '%'lf' expects argument of type 'double', but the expression '(num1 + num2 + num3)/3' is of type 'int'.
// Fixing the error:
// We can fix this by casting the expression to double before printing it.
// The corrected line would be:
// printf("Average: %lf", (double)(num1 + num2 + num3)/3);
// that is what type casting does, we have to convert the type of the expression to double so that it matches the expected type for the format specifier '%lf'.