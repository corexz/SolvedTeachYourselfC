#include <stdio.h>

int main ()
{
    char ch;

    for( ; ;)
    {
        printf("Load, Save, Edit, Quit?\n");

        do
        {
            printf("Enter your selection: ");
            fflush(stdin);
            ch = getchar();
        }while(ch != 'Q' && ch != 'L' && ch != 'S' && ch != 'E');

        if(ch == 'Q') break;
        else if(ch == 'L') printf("\nCannot load!");
        else if(ch == 'S') printf("\nI cannot save!");
        else if(ch == 'E') printf("\nI won't let to edit!");

        printf("\nHa! Ha! Nice!\n\n\n\n");
    }

    return 0;
}
