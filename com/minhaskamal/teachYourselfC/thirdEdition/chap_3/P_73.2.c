#include <stdio.h>

int main ()
{
    char ch;

    printf("What do you want to do?\n\t\Add,\tSubtract,\tMultiply,\tor  Divide.\n");
    printf("Enter first letter: ");
    ch = getchar();
    printf("\n");

    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    if (ch=='A' || ch=='a') printf("Sum is %d", a+b);
    else if (ch=='S' || ch=='s') printf("Sum is %d", a-b);
    else if (ch=='M' || ch=='m') printf("Sum is %d", a*b);
    else if ((ch=='D' || ch=='d') && b!=0) printf("Sum is %d", a/b);
    else printf("Wrong information !\a\a");

    printf("\n\n");

    return 0;
}
