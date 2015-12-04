#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char s[80];

    printf("Enter a string: ");
    gets(s);

    for(i=strlen(s); i<79; i++) strcat(s, ".");

    printf(s);

    return 0;
}
