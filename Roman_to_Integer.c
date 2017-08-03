#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int char2int(char a);
int romanToInt(char* s) {
    int i,tmp = 0;
    
    for(i=0;i<strlen(s);i++){
        if(i+1<strlen(s) && (char2int(s[i]) < char2int(s[i+1]))){
            tmp += char2int(s[i+1])-char2int(s[i]);
            i++;
        }else{
            tmp += char2int(s[i]);
        }
    } 
    return tmp;
}

int char2int(char a){
    switch(a){
        case 'I':  return 1; break;
        case 'V':  return 5; break;  
        case 'X':  return 10; break;  
        case 'L':  return 50; break;  
        case 'C':  return 100; break;  
        case 'D':  return 500; break;  
        case 'M':  return 1000; break;  
    }
    return 0;
}
int main(int argc, char **argv){
    char a[] = "IXL";
    printf("%s\n%d\n",a,romanToInt(a));
    return 0;
}