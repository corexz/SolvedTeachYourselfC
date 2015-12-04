#include <stdio.h>

int main ()
{
    float e, m;

    printf("Enter your weight on Earth: ");
    scanf("%f",&e);

    m=e*17/100;

    printf("\nYour weight on Moon is: %lf\n", m);

    return 0;
}
