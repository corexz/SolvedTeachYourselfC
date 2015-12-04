#include <stdio.h>

int main()
{
    int t=0, i, j;

    do
    {
        printf("Enter next number (0 to stop): ");
        scanf("%d", &i);
        printf("Enter number again: ");
        scanf("%d", &j);

        if(i!=j)
        {
            printf("Mismatch\n");
            continue;
        }
        t=t+i;
    }while(i);

    printf("Total is %d\n", t);

    return 0;
}

