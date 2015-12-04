#include <stdio.h>

int main ()
{
    int i=1, j;

    printf("Enter an integer: ");
    scanf("%d", &j);

    printf("\n\n");
    for(; i<j; i=i+i) printf("\t%d\n", i);
    printf("\n\n");

    return 0;
}

