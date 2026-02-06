#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a,b;
    scanf("%d%d",&a,&b);
    int c = a;
    for(int i = 0;i<b-1;i++){
        a = c*a;
    }
    if(b == 0){
         a =1;
    }
    printf("%d",a); 
    return 0;
}
