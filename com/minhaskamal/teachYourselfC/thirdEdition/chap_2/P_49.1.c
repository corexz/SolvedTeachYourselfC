#include <stdio.h>

int main ()
{
    int o;

    printf("Choose an operator: \n                   1: '+'   2: '-' \n");
    scanf("%d", &o);

    int x, y;

    printf("Enter your first number: ");
    scanf("%d", &x);

    printf("Enter your second number: ");
    scanf("%d", &y);

    if(o == 1) printf("Summation is %d\n", x+y);
    else {
            if(o == 2) printf("Subtracton is %d\n", x-y);
            else printf("Wrong information!\n");
          }
    return 0;
}
