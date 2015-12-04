#include <stdio.h>

int main()
{
    float d, s;
    int n;

    printf("Enter number of drive: ");
    scanf("%d", &n);

    for(; n; n--)
    {
        printf("\nEnter distance(in km): ");
        scanf("%f", &d);

        printf("Enter average speed(in km/hour): ");
        scanf("%f", &s);

        printf("Drive time is : %f hour\n\n", d/s);
    }

    return 0;
}
