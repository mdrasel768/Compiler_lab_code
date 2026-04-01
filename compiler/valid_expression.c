#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int main()
{
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int valid = 1;
    int balance = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == '(')
            balance++;
        else if (str[i] == ')')
            balance--;

        if (balance < 0)
        {
            valid = 0;
            break;
        }

        if (i < len - 1 && isOperator(str[i]) && isOperator(str[i + 1]))
        {
            valid = 0;
            break;
        }
    }

    if (balance != 0)
        valid = 0;

    if (valid)
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}