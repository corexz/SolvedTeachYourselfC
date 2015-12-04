#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char s[80];

    printf("Enter a string: ");
    gets(s);

    for(i=0; s[i]; i++) s[i]=toupper(s[i]);

    printf("%s\n", s);

    for(i=0; s[i]; i++) s[i]=tolower(s[i]);

    printf("%s\n", s);

    return 0;
}
