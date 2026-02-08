#include <stdio.h>
#include <limits.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int firstmax = INT_MIN;
        int secondmax = INT_MIN;
        for(int i =0;i<n;i++){
            if(a[i]>firstmax){
                secondmax = firstmax;
                firstmax = a[i];
            }else if(a[i]>secondmax && a[i] != firstmax){
                secondmax = a[i];
            }
        }
        int sum =firstmax + secondmax;
        printf("%d\n",sum);
    }

    return 0;
}
