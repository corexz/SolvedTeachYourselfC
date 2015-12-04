#include <stdio.h>

int main()
{
    int *p, q=1;

    p=&q;
    printf("%p ", p);

    *p++;
    printf("%d %p", q, p);

    return 0;
}
