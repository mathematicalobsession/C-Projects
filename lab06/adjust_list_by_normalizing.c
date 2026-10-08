/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

Prompt:
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers.
For this program, adjust the values by dividing all values by the largest value. The input begins with an integer indicating the number of floating-point values that follow. Assume that the list will always contain less than 20 positive floating-point values.
For coding simplicity, follow every output value by a space, including the last one. And, output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf ", yourValue);
Ex: If the input is:
5
30.0 50.0 10.0 100.0 65.0
the output is:
0.30 0.50 0.10 1.00 0.65 
The 5 indicates that five floating-point values are in the list, namely 30.0, 50.0, 10.0, 100.0, and 65.0. 100.0 is the largest value in the list, so each value is divided by 100.0.
For coding simplicity, follow every output value by a space, including the last one.
*/

#include <stdio.h>
int main(void) { 
    double vals[20]; // array to hold the floating-point values
    int numVals; // number of values to read
    double maxVal = 0.0; // variable to hold the maximum value, a double is used to hold the maximum value since the values are floating-point numbers, a double is used to hold the maximum value since the values are floating-point numbers, a double can hold larger values than a float 

    // Step 1: Read in how many numbers will be inputted by the user 
    scanf("%d", &numVals); // scans in the number of values to read and stores it in the variable numVals

    // step 2: read in the numbers and store them and then find the maximum value 
    // we can use a for loop to read in the values and find the maximum value at the same time 
    for (int i = 0; i < numVals; ++i) { // this for loop will iterate numVals times, which is the number of values to read in
        scanf("%lf", &vals[i]); // this reads in the value and then stores it at the index i in the array vals 
        if (vals[i] > maxVal) { // this checks if the value at the index i is greater than the current maximum value
            maxVal = vals[i]; // if it is, then we set the maximum value to be the value at the index i
        }
    }
// step 3 is to divide each number by maxVal and print with 2 decimal places 
    for (int i = 0; i < numVals; ++i) { // this for loop will iterate numVals times, which is the number of values to read in
        printf("%0.2lf ", vals[i] / maxVal); // this divides the value at the index i by the maximum value and then prints it with 2 decimal places
    }
    printf("\n");
    return 0;
    }


}

/* 
What this code does:
This code reads a list of floating-point values from the user, 
normalizes them by dividing each value by the largest value in the list, 
and then prints the normalized values with two decimal places.
*/