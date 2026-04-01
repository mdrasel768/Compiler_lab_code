#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
   
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i;
    bool hasAlpha = false, hasDigit = false, hasSpecial = false;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            hasAlpha = true;
        }
        else if (isdigit(str[i]))
        {
            hasDigit = true;
        }
        else
        {
            hasSpecial = true;
        }
    }

    if (hasAlpha && !hasDigit && !hasSpecial)
    {
        printf("The string is Alphabetic.\n");
    }
    else if (!hasAlpha && hasDigit && !hasSpecial)
    {
        printf("The string is Numeric.\n");
    }
    else if (hasAlpha && hasDigit && !hasSpecial)
    {
        printf("The string is Alphanumeric.\n");
    }
    else if (!hasAlpha && !hasDigit && hasSpecial)
    {
        printf("The string contains only Special Characters.\n");
    }
    else
    {
        printf("The string is a Mixed String.\n");
    }

    return 0;
}