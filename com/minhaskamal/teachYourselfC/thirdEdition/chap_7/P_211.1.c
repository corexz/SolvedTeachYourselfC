#include <stdio.h>

void d(char *p);

int main()
{
    d("I Love Science!");

    return 0;
}

void d(char *p)
{
    if(*p)
    {
        printf("%c", *p);
        d(p+1);
    }
}


