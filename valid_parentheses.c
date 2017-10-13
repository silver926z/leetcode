#include<string.h>
bool isValid(char* s) {
    char stack[100000];
    int top=-1,i,len = strlen(s);
    for(i=0;i<len;i++){
        if(s[i] == ')'){
            if(top>-1 && stack[top] == '(')
                top--;
            else
                return false;
        }else if(top>-1 && s[i] == '}'){
            if(stack[top] == '{')
                top--;
            else
                return false;
            
        }else if(top>-1 && s[i] == ']'){
            if(stack[top] == '[')
                top--;
            else
                return false;
        }else{
            stack[++top] = s[i];
        }
        
    }
    if(top == -1)
        return true;
    else 
        return false;   
}