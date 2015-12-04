#include <stdio.h>

int main()
{
    long int i;

    printf("Enter an integer number: ");
    scanf("%ld", &i);

    for(; i; i--);
    printf("\n \a \n \a \n \a \n");

    return 0;
}
