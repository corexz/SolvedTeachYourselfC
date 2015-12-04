#include <stdio.h>

int main()
{
    int i=0;

    again:
        printf("%d\t", i);
        i++;
        if(i<10) goto again;

    return 0;
}
