#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int n;
    scanf("%d", &n);

    int totalRows = 2 * n - 1;

    for(int i = 0; i < totalRows; i++) {
        
        int row = i < n ? i : totalRows - i - 1;
                                                 
        for(int s = 0; s < n - row - 1; s++)
            printf(" ");
        if(row == 0) {
            printf("*");
        }
        else {
            printf("*");
            for(int sp = 0; sp < 2 * row - 1; sp++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


