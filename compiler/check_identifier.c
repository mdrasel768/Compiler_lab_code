#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    char keywords[10][20] = {"int", "float", "if", "else", "while", "for", "return", "void", "char", "double"};


    bool is_keyword = false;
   for(int i = 0; i < 10; i++)
    {
        if(strcmp(str, keywords[i]) == 0)
        {
            is_keyword = true;
            break;
        }
    }
    if(is_keyword)
    {
        printf("The given string is a keyword.\n");
    }
    else
    {
        printf("The given string is not a keyword.\n");
    }
    return 0;
}