#include <stdio.h>

int main()
{
    int i=1;
    for(; i<11; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    int j=1;
    while(j<11)
    {
        printf("%d  ", j);

        j++;
    }

    printf("\n\n");

    int k=1;
    do
    {
        printf("%d   ", k);

        k++;
    }while(k<11);

    printf("\n\n");

    return 0;
}
