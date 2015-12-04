#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Enter your massage: \n");

    ch = getche();
    while(ch != '\r')
        {
        printf("\t%c\n", ch+5);
        ch = getche();
        }

    return 0;
}


/*
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Enter your massage: \n");

    ch = getche();
    while(ch != '\r')
        {
        printf("\t%c\n", ch-5);
        ch = getche();
        }

    return 0;
}
*/
