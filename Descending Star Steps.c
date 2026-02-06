#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
    scanf("%d",&n);
    
    // Outer loop to print all rows
    for (int i = n; i>=1; i--)
    {

        // Inner loop to print the * in each row
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
