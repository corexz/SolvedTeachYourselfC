#include <stdio.h>

int main()
{
    int i=1;

    first:
        if(i>10) goto second;

        printf("%d\t", i);
        i++;
        goto first;

    second:
        printf("\n\t\t\t\t\tEnd\n");

    return 0;
}
