#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a,b,x,count = 0;
    if(a>b){
        x = b;
    }
    if(b>a){
        x = a;
    }
    for(int i = 1;i<=x;i++){
        if(a%i == 0 && b%i == 0){
        count++;
        }
    }
    return count;
}
