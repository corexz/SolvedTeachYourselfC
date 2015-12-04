#include <stdio.h>

int main()
{
    char s[80];

    *(s+3) = 'c';
    printf("%c", *(s+3));

    return 0;
}
