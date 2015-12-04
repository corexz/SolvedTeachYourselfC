#include <stdio.h>

int main()
{
    char s[80], *p;

    printf("Enter a string: ");
    gets(s);

    p = s;

    while(*p && *p!=' ') p++;

    printf(p);

    return 0;
}
