#include <stdio.h>
#include <string.h>

int main()
{
    int i=0, j;
    char s[80];

    printf("Enter your message: ");
    gets(s);

    j=strlen(s)-1;
    while(i<=j)
    {
        if(i<j) printf("%c%c", s[i], s[j]);
        else printf("%c", s[i]);
        i++;
        j--;
    }

    return 0;
}
