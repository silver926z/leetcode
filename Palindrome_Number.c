#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0

bool isPalindrome(int x) {
    int tmp=x;
    int reverse = 0;
    while(tmp > 0){
        reverse *= 10;
        reverse += tmp % 10;
        tmp /= 10;
    }
    if(x == reverse)
        return true;
    return false;
}

int main(int argc, char **argv){
    printf("%d\n",isPalindrome(121));
    return 0;
}