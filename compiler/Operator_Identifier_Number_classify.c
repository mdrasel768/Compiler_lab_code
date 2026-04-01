#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char str[])
{
    char keywords[][20] = {
        "int", "float", "if", "else", "while", "for", "return", "char", "double", "void"};

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=';
}

int isIdentifier(char str[])
{
    if (!(isalpha(str[0]) || str[0] == '_'))
        return 0;

    for (int i = 1; i < strlen(str); i++)
    {
        if (!(isalnum(str[i]) || str[i] == '_'))
            return 0;
    }
    return 1;
}

int isNumber(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (strlen(str) == 1 && isOperator(str[0]))
        printf("Operator\n");
    else if (isKeyword(str))
        printf("Keyword\n");
    else if (isNumber(str))
        printf("Number\n");
    else if (isIdentifier(str))
        printf("Identifier\n");
    else
        printf("Invalid Token\n");

    return 0;
}