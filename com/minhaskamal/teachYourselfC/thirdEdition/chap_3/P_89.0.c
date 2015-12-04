#include <stdio.h>

int main()
{
    int i;

    for(i=1; i<100; i++)
    {
        printf("%d\t", i);

        if(i==40) break;
    }

    return 0;
}
