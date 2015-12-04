#include <stdio.h>

int power(int m, int e);

int main()
{
    int m=2, e=3;

    printf("%d to the %d is %d\n", m, e, power(m, e));
    printf("4 to the 5 is %d\n", power(4, 5));
    printf("3 to the 3 is %d\n", power(3, 3));

    return 0;
}

int power(int m, int e)
{
    int t;

    t = 1;
    for( ; e>0; e--) t=t*m;

    return t;
}


