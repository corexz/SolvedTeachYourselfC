#include <stdio.h>

int main ()
{
    int a,b;
    char c;

    printf("Do you want to: \nAdd, Subtract, Multiply or Divide?\n");

    do
    {
        printf("Enter first latter: ");
        c = getchar();
    }while(c!='A' && c!='S' && c!='M' && c!='D');

    printf("\n");

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(c)
    {
        case'A':
            printf("%d", a+b);
            break;
        case'S':
            printf("%d", a-b);
            break;
        case'M':
            printf("%d", a*b);
            break;
        case'D':
            if(b!=0) printf("%d", a/b);
            else printf("Error!");
            break;
    }

    return 0;
}
