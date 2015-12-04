#include <stdio.h>

void prompt(char *msg, char *s);

int main()
{
    char str[100];

    prompt("Enter your string: ", str);
    printf("Your string is: %s", str);

    return 0;
}

void prompt(char *msg, char *s)
{
    printf(msg);
    gets(s);
}
