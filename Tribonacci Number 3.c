#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a = 0,b=1,c=1,d=0;
    scanf("%d",&n);
    for(int i = 3;i<=n;i++){
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    printf("%d",d);
    return 0;
}
