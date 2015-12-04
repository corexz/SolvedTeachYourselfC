#include <stdio.h>

int main()
{
    char c, *cp=&c;
    int i, *ip=&i;
    float f, *fp=&f;
    double d, *dp=&d;

    printf("%p %p %p %p \n", cp, ip, fp, dp);

    cp++;
    ip++;
    fp++;
    dp++;

    printf("%p %p %p %p\n\n", cp, ip, fp, dp);

    return 0;
}
