#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int dot = 0;
    bool valid = true;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '.')
            dot++;
        else if (!isdigit(str[i]))
        {
            valid = false;
            break;
        }
    }

    if (!valid || dot > 1)
        printf("Invalid Number\n");
    else if (dot == 1)
        printf("Float Number\n");
    else
        printf("Integer Number\n");

    return 0;
}