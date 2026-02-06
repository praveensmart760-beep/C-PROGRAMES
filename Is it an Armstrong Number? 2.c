#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,r,sum = 0;
    scanf("%d",&n);
    int temp = n;
    int count = 0;
    while(n != 0){
        count ++;
        n = n/10;
    }
      n = temp;
    while(temp > 0){
        r = temp % 10;
        int mal = 1;
    for (int i = 1; i<=count;i++){
        mal = mal * r;
    }
        sum = sum + mal;
        temp /= 10;
    }
    if(n == sum){
        printf("true");
    }else{
        printf("false");
    }
    return 0;        
}
