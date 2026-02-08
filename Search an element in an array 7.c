#include <stdio.h>

int main() {
    int n,value;
    scanf("%d %d",&n,&value);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        if(arr[i]== value){
            printf("YES");
           return 0;
        }
    }
        printf("NO");
    return 0;
}
