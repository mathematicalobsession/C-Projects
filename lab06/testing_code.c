
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "uic"; // Declare a character array to hold the string "uic"
    strcat(str1, ".edu"); //strcat means concatenate the string ".edu" to the end of str1, its attaching it onto there  
    printf("%s", str1); // This will print the concatenated string
    printf("\n"); //new line
    printf("%d", (int)strlen(str1)); // This will print the length of the concatenated string
    // The line above is tricky, 
    // %d = print an integer 
    // (int) = change the value to an integer first 
    // strlen(str1) = get the length of the string
    char str2[20] = "CS107"; // declares a character array to hold the string "cs107"
    strcpy(str2, str1); // this means "copy the contents of str1 into str2" so str1 is still "uic" but str2 becomes "uic" so str2 gets the exact same text as str1
    printf("\n");
    printf("%d", strcmp(str2,str1)==0); // this part means "is the result of comparing them equal to 0?" In other words "Are these strings exactly the same?" So basically its saying "Print 1 if the strings match, otherwise just print 0."
    printf("\n");
    printf("%s", str2);
}

// gcc testing_code.c -o testing_code; .\testing_code