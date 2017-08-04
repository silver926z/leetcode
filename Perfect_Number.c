#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define bool int
#define true 1
#define false 0
bool checkPerfectNumber(int num) {
    if(num == 1) return false;
    int sqrt_n = sqrt(num);
    int i,sum=1;
    for(i=2;i<=sqrt_n;i++){
        if(num%i == 0){
            sum += (i + (num/i) );
        }
        if(sum > num) return false;
    }
    if(sum == num)
        return true;
    else
        return false;
}

int main(int argc, char **argv){

    return 0;
}