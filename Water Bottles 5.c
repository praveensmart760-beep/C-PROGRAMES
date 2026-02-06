#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int numBottles,numExchange;
    int total=numBottles;
    int empty=numBottles;
    while(empty>=numExchange){
        int newBottle = empty/numExchange;
        total=total+newBottle;
        empty=newBottle+(empty%numExchange);
    }
    return total;   
    return 0;
}
