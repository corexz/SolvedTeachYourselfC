#include <stdio.h>

int main ()
{
    int i, j;

    printf("Enter first number: ");
    scanf("%d",&i);
    printf("Enter second number: ");
    scanf("%d",&j);

    //relational
    printf("i < j is: %d\n", i < j);
    printf("i <= j is: %d\n", i <= j);
    printf("i == j is: %d\n", i == j);
    printf("i > j is: %d\n", i > j);
    printf("i >= j is: %d\n\n", i >= j);

    //logical
    printf("i && j is: %d\n", i && j);
    printf("i || j is: %d\n", i || j);
    printf("!i !j is: %d %d\n", !i, !j);

    return 0;
}
