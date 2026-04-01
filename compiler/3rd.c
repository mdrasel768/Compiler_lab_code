// a^* b^+
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_validRE(char *str)
{
    int len = strlen(str);
    int b_cnt = 0, i = 0;
    if (len == 0)
        return false;
    while(str[i] != 'b')
    {
        if (str[i] != 'a')
        return false;
        i++;
    }

    for(int j = i; j < len; j++)
    {
        if (str[i] != 'b')
        return false;
        b_cnt++;
    }

    if(b_cnt > 0)
    return true;
    return false;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (is_validRE(str))
        printf("Valid\n");
    else
        printf("Not valid\n");
}