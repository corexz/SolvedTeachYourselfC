#include <stdio.h>

int get_sqr();

int main (void)
{
    int sqr;

    sqr = get_sqr();
    printf("Square: %d", sqr);

    return 0;
}

int get_sqr()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    return num*num; //square the number
}
