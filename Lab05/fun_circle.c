/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)
Prompt:
CODE TEMPLATE: Plots a 2D grid of distances to the origin (0,0) of a coordinate system. The user inputs the size of the grid by entering both a max x-value AND max y-value such that the grid spans x-values from -maxX to +maxX AND spans y-values from -maxY to +maxY.
Programming Task: Plot another copy of the 2D grid of distances to the origin (0,0), but this time only plot the values that are within an absolute difference of 0.5 from a user-inputted radius value. The resulting output should look approximately like a circle with radius specified by user-input. Plot an 'X' at the origin.
Note that each floating-point value is represented with a single digit after the decimal point AND uses 5 total characters (e.g. number less than 10 are plotted using a space, then the unit digit, then the decimal point, then the tenths digit, then another space). This type of formatting can be achieved using the format specifier "%4.1f ". Also, each row has an empty line in between.
Here is an example of the program output (mixed with user-input values of 5, 6, 4):
*/

#include <stdio.h>
#include <math.h>

int main() {
    //distances from origin for integer values of x and y
    int maxX = 5, maxY = 6;
    double dist;
    int radius = 4;
    
    printf("Enter the max x-value for the grid: \n");
    scanf("%d",&maxX);
    printf("Enter the max y-value for the grid: \n");
    scanf("%d",&maxY);
    
    //printing values of sqrt(x^2 + y^2)
    for (int y=-maxY; y <= maxY; ++y){
        for (int x=-maxX; x <= maxX; ++x){
            dist = sqrt(x*x + y*y);
            
            printf("%4.1f ", dist);
        }
        printf("\n\n");
    }
    printf("\n\n");
    
    printf("Enter the radius of your circle: \n");
    scanf("%d",&radius);

    
    //ADD CODE HERE TO DRAW A CIRCLE
    // we have to take advantage of the nested loop we were given 
for (int y=-maxY; y<=maxY; ++y){
    for (int x= -maxX; x <= maxX; ++x){
        dist = sqrt(x*x + y*y);
        if ( fabs(radius - dist) <= 0.5) {
            printf("%4.1f ", dist);
    }
    else if( x==0 && y==0){
        printf("  X  ");
    }

    else
    {
        printf("     ");
    }
    }
    printf("\n\n");
}
    printf("\n\n");
    return 0;

}