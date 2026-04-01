// (ab)^2+
#include<stdio.h>
#include<stdbool.h>
#include <ctype.h>
#include<string.h>

bool isvalid(char *str){
    int len = strlen(str);
    if(len < 4 || str[0] == 'b' || len % 2 != 0)
    return false;

    for(int i = 0 ; i < len; i++)
    {
        if (str[i] == 'a' && str[i+1] == 'b')
        continue;
        else
        return false;
    }
     return true;
}

int main(){
    char str[100];

    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    if(isvalid(str))
    printf("valid\n");
    else
    printf("invalid\n");

    return 0;
}


