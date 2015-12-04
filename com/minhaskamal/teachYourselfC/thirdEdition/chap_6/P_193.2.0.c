#include <stdio.h>

void myfunc(int *p);

int main()
{
    int i;

    myfunc(&i);

    printf("%d\n" ,i);

    return 0;
}

void myfunc(int *p)
{
    *p = -1;
}
