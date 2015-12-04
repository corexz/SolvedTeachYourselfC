#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char c;

    for(i=1; i<10000; i++)
    {
        if(!(i%6))
        {
            printf("%d, more? (Y/N)", i);
            c=getche();
            if(c=='N' || c=='n') break;
            printf("\n");
        }
    }

    return 0;
}
