#include <stdio.h>

int main()
{
    char c[80];

    printf("Enter a string (less than 80 chars): ");
    gets(c);
    printf(c);

    return 0;
}
