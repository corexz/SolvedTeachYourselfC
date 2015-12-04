#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Enter the length: ");
    scanf("%d", &x);

    printf("Enter the width: ");
    scanf("%d", &y);

    printf("Enter the hight: ");
    scanf("%d", &z);

    printf("The volume is %d \n", x*y*z);

    return 0;
}
