#include <stdio.h>

int main()
{
    unsigned long int x;
    printf("Enter the distance (in mile): ");
    scanf("%lu", &x);

    printf("The time that light will take is: %d sec\n", x/186000);

    return 0;
}
