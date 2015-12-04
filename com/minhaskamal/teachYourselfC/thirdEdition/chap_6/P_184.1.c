#include <stdio.h>

int main()
{
    char *p = "stop";
    char s[80];

    do
    {
        printf("Enter a string: ");
        gets(s);
    }while(strcmp(p,s));

    return 0;
}
