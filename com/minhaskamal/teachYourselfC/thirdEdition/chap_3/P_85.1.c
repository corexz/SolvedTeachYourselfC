#include <stdio.h>

int main()
{
    int a, b;
    char ch;

    printf("Do you want to: \n");
    printf("Add, Subtract, Multiply, or Divide?\n");

    do
    {
        printf("Enter first letter: ");
        ch = getchar();
    }while(ch!='A' && ch!='S' && ch!='M' && ch!='D' && ch!='a' && ch!='s' && ch!='m' && ch!='d');
    printf("\n");

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Answer is: ");

    if(ch=='A' || ch=='a') printf("%d", a+b);
    else if(ch=='S' || ch=='s') printf("%d", a-b);
    else if(ch=='M' || ch=='m') printf("%d", a*b);
    else if(ch=='D' || ch=='d') printf("%d", a/b);

    printf("\n\n");

    return 0;
}
