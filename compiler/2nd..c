#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isvalid(char *str){
    int len = strlen(str);

    if (len == 0)
        return false;

    if(str[len - 1] != 'c')
    return false;
    
    for(int i = 0; i < len-1; i ++)
    {
        if (str[i] != 'a' && str[i] != 'b')
            return false;
    }

    return true;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    if (isvalid(str))
        printf("valid\n");
    else
        printf("invalid\n");
}