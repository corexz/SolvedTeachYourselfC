#include <stdio.h>
int main ()
{
    int x;

    printf("Enter the number of years: ");
    scanf ("%d", &x);

    printf("Number of seconds are %d", 365*60*60*24*x);
    return 0;
}
