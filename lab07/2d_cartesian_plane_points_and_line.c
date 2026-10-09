/*
Stella Wilcox 
Jason Polakis
University of Illinois Chicago

Prompt:
Write a complete C program that inputs four integers representing the (x,y)
coordinates of two points in the 2D Cartesian plane, and prints the equation of
the line that goes through both points. Recall that this can be done using the
formula y = mx + b such that x and y are variables, the slope is m=y_2-y_1/x_2-x_1, 
and the y-intercept is b=y-mx_1
Please take into account the special cases:
1.) Horizontal lines have zero slope (y_2 - y_1 = 0) and the equation is y=constant
2.) Verticle lines have infinite slope (x_2 - x_1 = 0) and the equation is x = constant 
3.) A line cannot be determined if the user enters two identical points.
    Special case 3 needs to be checked first since identicle points would pass the verticle and horizontal checks.
*/

#include <stdio.h>

int main(void) { 
    int x1, y1, x2, y2; //declare varaibles of datatype int x1, x2, y1, y2
    double m; //the slope 
    double b; // the y-intercpet 

    printf("Please enter the coordinates of the first point (x1, y1): \n");
    scanf("%d %d", &x1, &y1);
    printf("Please enter the coordinates if the second point (x2, y2): \n");
    scanf("%d %d", &x2, &y2);

/* 
There are three special cases that need to be taken into account that the code needs to sift out before executing the proper calculations
    Case 1: A line cannot be determined if the user enters two identical points.
            In short: identical points --> No unique line (This needs to be adressed first because identical points would also pass the vertical and horizontal checks)
    Case 2: Vertical lines have an infinite slope (x_2 - x_1 = 0) and the equation is x = constant
            In short: same x coodinates --> vertrical line: x = x_1
    Case 3: Horizontal lines have zero slope (y_2 - y_1 = 0) and the equation is y = constant
            In short: same y coordinates --> horizontal line: y = y_1
    OTHER WISE: Calculate slope (m) and y-intercept (b)
*/
// Create a giant if-else statement that checks what we need.
// First Check: Are both points identical?
//              Are both sets of coordinates the same?
    if (x1 == x2 && y1 == y2){ // if this is true then this is just one singular point, and one point is not enough to determine a unique line
        printf("Identical points cannot make a line.\n"); // this will print if the condition above is true.
        return 1; // this ends the code if whats above is true.
    }
    // check if just the x coordinates are the same.
        if (x1 == x2) { //if this is true print the following...
            printf("The line is vertical and x = %d\n", x1);
            return 1; // end the code if its true
            // otherwise check if the y coordinates are the same
        } else if (y1==y2){
                printf("This line is horizontal and y =%d\n", y1);
            }
            // Otherwise the line is slanted....
            else {
                // slope = change in y divided by change in x 
                // (double) allows for a decimal answer, I have to type cast it in there since currently its an integer 
                m = (double)(y2-y1)/(x2-x1); // calculation for the slope 
                // now that the slope has been found we may find the y-intercept using the first point (done below)
                b = y1 - m * x1;

                // then %.6f prints a decimal number with 6 decimal places 
                // this matches the sample formatting, including a + before b regardless if the sign is negative or not.
                printf("y=%.6lf*x+%.6lf\n", m, b);
            }
            return 0;
}

// to compile in terminal run: gcc -o 2d_cartesian_plane_points_and_line 2d_cartesian_plane_points_and_line.c
// ./2d_cartesian_plane_points_and_line

// HOW TO SEE THE ERROR:
// Ask gcc (the compiler) to report the warnings with the following command
// gcc -Wall -Wextra -Wformat=2 -o 2d_cartesian_plane_points_and_line 2d_cartesian_plane_points_and_line.c



// to terminate visual studio code suggestions 
// settings > search> inline suggest > Enabled > off
// OR
// settings >text editor > suggestions > inline suggest > off (toggle it)

// also remove the overtype mode by hitting the insert key on the keyboard. 