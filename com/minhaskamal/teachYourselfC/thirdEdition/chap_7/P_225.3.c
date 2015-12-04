#include <stdio.h>

void avg(double *d, int i);

int main()
{
    double str[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    avg(str, 10);

    return 0;
}

void avg(double *d, int i)
{
    double s=0;
    int a;

    for(a=0; a<i; a++) s=s+d[a];

    printf("The average is: %lf", s/(double)a);

    return ;
}
