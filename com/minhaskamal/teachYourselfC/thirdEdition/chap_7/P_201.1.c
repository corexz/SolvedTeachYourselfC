#include <stdio.h>

double v(double s1, double s2, double s3);

int main()
{
    double vol;

    vol=v(12.2, 5.3, 9.03);
    printf("Volume: %f", vol);

    return 0;
}

double v(double s1,double s2,double s3)
{
    return s1*s2*s3;
}
