#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Enter character: ");
    ch = getche();

    while(ch != 'q') ch = getche();
    printf("\n\nFound the q\n\n\n.");

    return 0;
}
