/* 
Stella Wilcox 
Jason Polakis
University of Illinois Chicago

Prompt: Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow. You can assume that the list will have at least 2 integers and less than 20 integers.

Ex: If the input is:

5
10 5 3 21 2
the output is:

2 and 3

To achieve the above, first read the integers into an array.

Hint: Make sure to initialize the second smallest and smallest integers properly.
*/

#include <stdio.h>

int main() {

    int x = 1378;
    int y = 0;
    while(x>0){
        printf("+%d",x%10);
        y+= x%10;
        x=x/10;
    }
    printf("=%d",y);    

return 0;
 
   
    
}