#include <stdio.h>

int main()
{
    int *p, q;

    p=&q;
    *p=199;

    printf("Value of (q) is: %d\n", q);
    printf("Value of (&q) is (changing): %p\n", &q);
    printf("Value of (p) is: %p\n", p);
    printf("Value of (*p) is (changing): %d\n\n", *p);

    return 0;
}
