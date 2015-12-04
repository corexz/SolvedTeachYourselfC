#include <stdio.h>

int main()
{
    int i;
    char *p;
    char s[]="Pointers are fun.";

    p=s;

    for(i=0; p[i]; i++) printf("%c", p[i]);

    //printf("  %p ", s);

    return 0;
}
