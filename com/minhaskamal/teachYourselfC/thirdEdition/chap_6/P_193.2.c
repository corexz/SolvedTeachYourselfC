#include <stdio.h>

int main()
{
    int i, *j=10;

    j=&i;

    printf("%d  %d", i, *j);

    return 0;
}
