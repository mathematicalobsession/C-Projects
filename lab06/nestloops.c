#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i<4; i++) { 
        
        for (j=1; j<=5; j++) { 
            if (i%2==1) {
                printf("#");
            }
            else { 
                printf("~");
            }
        }
        printf("\n");
    }
return 0;



}
// gcc nestloops.c -o nestloops; .\nestloops
