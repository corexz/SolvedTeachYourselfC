#include <stdio.h>

int main()
{
    char ch;

    do
    {
        printf("\nEnter a character, q to quit: ");
        fflush(stdin);
        ch = getchar();
        printf("\n");

        switch(ch)
        {
        case 'a':
            printf("Now is ");
        case 'b':
            printf("the time ");
        case 'c':
            printf("for all good men. ");
            break;
        case 'd':
            printf("The summer ");
        case 'e':
            printf("soldier. ");
        }
    }while(ch != 'q');

    return 0;
}
