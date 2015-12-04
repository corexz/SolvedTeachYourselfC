#include <stdio.h>

int main()
{
    int i, *p;

    p=&i;

    for(i=0; i<11; i++) printf("%d ", *p);

    return 0;
}
