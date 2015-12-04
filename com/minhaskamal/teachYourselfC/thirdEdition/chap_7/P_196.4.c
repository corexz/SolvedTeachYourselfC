#include <stdio.h>

int main()
{
    float a, *p;

    p = &a;
    *p = 11.99;

    printf("%f\n", a);

    return 0;
}

