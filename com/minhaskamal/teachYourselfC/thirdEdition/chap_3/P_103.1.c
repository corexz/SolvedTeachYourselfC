#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character ('q' to quit): ");
    do
    {
        fflush(stdin);
        ch = getchar();
        switch(ch )
        {
        case '\n':
            printf("Enter\n");
            break;

        case '\b':
            printf("Backspace\n");
            break;

        case '\t':
            printf("Tab\n");
            break;

        default:
            printf(" ");
        }
    }while(ch != 'q');

    return 0;
}
