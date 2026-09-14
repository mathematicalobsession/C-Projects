/* 
Name: Stella Wilcox
Course: University of Illinois at Chicago 
C/C++ Programming (CS107)
Platform: zyBooks (Resource)

This program calculates and displays the volume of a cube and is based on the given user input
for side length

*/

#include <stdio.h>
int main (void) { 

    // declare varaibles
    int sideLength;
    int cubeVolume;

// write question for the user to read 
        printf("What is the side length of the cube with the volume that you are looking to calculate?\n");

// scan for user input, collect the cube's side length from user 
        scanf("%d", &sideLength);

        // run the calcualtion for the cube's volume 
        // mathematical operation: volume of cube = sideLength * sideLength * sideLength

        cubeVolume = (sideLength * sideLength * sideLength);

        // print words 
        printf("The volume of a cube with side length %d is: ", sideLength);
        printf("%d", cubeVolume);


}
