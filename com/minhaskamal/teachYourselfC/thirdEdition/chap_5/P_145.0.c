#include <stdio.h>

int main()
{
    char c[80];
    int a;

    printf("Enter a string (less than 80 chars): ");
    gets(c);

    for(a=0; c[a]; a++) printf("%c ", c[a]);
    printf("\n\n");

    return 0;
}
