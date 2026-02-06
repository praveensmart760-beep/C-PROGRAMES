#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int see=0;
    int soe=0;
    int sie=0;
    int sio=0;
    int arr[size];
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<size;i++){
        if(arr[i]%2 == 0){
            see += arr[i]; 
        }
        else{
            soe += arr[i];
        }
        if(i % 2 ==0){
            sie += arr[i];
        }
        else
            sio += arr[i];
            
    }
    printf("%d %d %d %d",see,soe,sie,sio);
   
}
