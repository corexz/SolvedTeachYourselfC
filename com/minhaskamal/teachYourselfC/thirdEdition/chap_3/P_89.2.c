#include <stdio.h>
#include <conio.h>

int main()
{
    char ch = 'y';

    while(ch=='y' || ch=='Y')
    {
        char c;

        printf("Enter a character: ");
        //scanf("%c", &c);
        c=getche();

        printf("\nregarding ASCII code is: %d", c);

        printf("\nDo you want to continue?(Y/N) ");
        //scanf("%c", &ch);
        ch=getche();

        printf("\n\n");
    }

    return 0;
}
