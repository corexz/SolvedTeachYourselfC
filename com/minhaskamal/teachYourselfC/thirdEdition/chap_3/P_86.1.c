#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    do
    {
        float x;

        printf("Enter gallon: ");
        scanf("%f", &x);

        printf("Litre is: %f\n\n", x*3.7854);

        printf("Do you want to continue?(Y/N)");
        c=getche();

        printf("\n\n\n");
    }while(c=='y' || c=='Y');

    return 0;
}
