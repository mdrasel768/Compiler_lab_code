#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
 
bool is_a(char *str)
{
    if (strcmp(str, "a") == 0)
        return true;
    return false;
}

bool is_abb(char *str)
{
    if(strcmp(str,"abb") == 0)
        return true;
    return false;
}

bool is_another(char *str)
{
    int len = strlen(str);
    int b_len = 0,i = 0;

    if(len == 0)
    return false;

    while(str[i] != 'b')
    {
        if(str[i] != 'a')
            return false;
        i++;
    }

    for(int j = i; j < len; j++)
    {
        if(str[j] != 'b')
            return false;
        b_len++;
    }
    if(b_len > 0)
    return true;

    return false;
}

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    if (is_a(str))
    {
        printf("accept : a");
    }
        else if(is_abb(str))
        {
            printf("accept : abb");
        }
        else if(is_another(str))
        {
            printf("accept : a^* b^+");
        }
        else{
            printf("invalid");
        }

        return 0;
} 