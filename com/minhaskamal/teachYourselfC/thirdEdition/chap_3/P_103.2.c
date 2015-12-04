#include <stdio.h>

int main()
{
    int k=0;

    for(; k<10; k++)
    {
        int i, j;

        printf("Enter first number: ");
        scanf("%d", &i);

        printf("Enter second number: ");
        scanf("%d", &j);

        if(j) printf("%d\n", i/j);
        else printf("Cannot divide by zero.\n");
    }

    return 0;
}

