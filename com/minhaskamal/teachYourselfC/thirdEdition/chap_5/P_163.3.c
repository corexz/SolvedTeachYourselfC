#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int s=0, p=0, c=0;
    char str[201];

    printf("Enter a string: ");
    gets(str);

    for(i=0; i<strlen(str); i++)
    {
        switch(str[i])
        {
            case '.':
                p++;
                break;

            case ',':
                c++;
                break;
            case ' ':
                s++;
                break;
        }
    }

    printf("Commas are: %d\n", c);
    printf("Periods are: %d\n", p);
    printf("Spaces are: %d\n", s);

    return 0;
}
