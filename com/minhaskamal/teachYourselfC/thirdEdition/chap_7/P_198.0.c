#include <stdio.h>

double volume();

int main()
{
    double v;

    v = volume(12.2, 5.4, 9.09);
    printf("Volume: %f", v);

    return 0;
}

double volume(double s1, double s2, double s3)
{
    return s1*s2*s3;
}
