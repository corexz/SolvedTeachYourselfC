#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    for(ch=getche(); ch!='q'; ch=getche());
    printf("\n\nFound the q.\n\n");

    return 0;
}
