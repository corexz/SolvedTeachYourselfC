#include <stdio.h>

int main()
{
    int i=1, j=2, k;

    k=i&j,
    printf("\n%d\n", k);
    k=i|j,
    printf("\n%d\n", k);
    k=i^j,
    printf("\n%d\n", k);
    k=~i,
    printf("\n%d\n", k);

    return 0;
}
