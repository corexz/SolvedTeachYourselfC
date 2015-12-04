#include <stdio.h>

int main()
{
    char s[51];
    int i;

    for(i=0; i<1; )
    {
        printf("Enter a string: ");
        gets(s);

        if(!strcmp(s, "quit")) i=1;
    }

    return 0;
}
