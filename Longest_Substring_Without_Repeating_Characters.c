#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a,int b){
    if (a>b)
        return a;
    return b; 
}
int lengthOfLongestSubstring(char* s) {
    int len = strlen(s),ans=0,left=0;
    int last[256],i;
    memset(last, -1 , sizeof(last));

    for(i=0;i<len;i++){
        if(last[s[i]] >= left)
            left = last[s[i]]+1;
        last[s[i]] = i;
        ans = max(ans,1+last[s[i]]-left); 
    }
    return ans;
}

int main(int argc, char **argv){
    char *s = "apple";
    printf("%s\n%d\n",s,lengthOfLongestSubstring(s));

    return 0;
}