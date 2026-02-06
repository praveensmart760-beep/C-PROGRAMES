#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,min = 9,max = 0;
    scanf("%d",&n);
    if(n<0){
        n = n*-1;
    }
    if(n<=0){
        printf("0 0");
        return 0;
    }
    while(n>0){
        int temp = n % 10;
        if(temp<min){
            min = temp;
        }if( temp > max){
            max = temp;
        }
        n = n/10;
    }
    printf("%d %d",max,min);
    return 0;
}
