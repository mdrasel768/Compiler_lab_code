 #include<stdio.h>
 #include<stdbool.h>
 #include<string.h>
 int main()
 {
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int i = 0;
    bool is_valid = false;

    while(str[i] != '\0')
    {
        if(str[i] == '/')
        {
            is_valid = true;
            break;
        }
        i++;
    }

    if(is_valid)
        printf("Valid\n");
    else
        printf("Not valid\n");


    return 0;
 }