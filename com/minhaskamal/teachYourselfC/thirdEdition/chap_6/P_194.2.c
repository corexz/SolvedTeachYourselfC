#include <stdio.H>

int main()
{
    char *p, s[40];

    printf("Enter a string: ");
    gets(s);

    p=s;

    int i, sp=0;
    for(i=0; *(p+i); i++) if(*(p+i)==' ') sp++;

    printf("Number of spaces are: %d\n", sp);

    return 0;
}
