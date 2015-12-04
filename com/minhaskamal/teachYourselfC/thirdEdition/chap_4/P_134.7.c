#include <stdio.h>

int series();

int n=21;

int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d  ", series());
    }


    return 0;
}


series()
{
    n=(n*1468)%467;

    return n;
}
