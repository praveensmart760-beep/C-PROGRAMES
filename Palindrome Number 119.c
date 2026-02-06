#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        long x;
        scanf("%ld",&x);
        long y = x;
        long rev = 0;
        if(x<0){
            x*=-1; 
        }
    
    while(x != 0){
       rev = rev *10 +(x%10);
       x = x/10;
    }
    if( rev == y){
        printf("True"); 
    }
    else { 
        printf("False");
    }     
     
return 0;
}
