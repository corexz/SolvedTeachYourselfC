#include <stdio.h>

double f_to_m();

int main()
{
    double f;

    printf("Enter feet: ");
    scanf("%lf", &f);
    printf("Meters: %f", f_to_m(f));

    return 0;
}

double f_to_m(double f)
{
    return f/3.28;
}
