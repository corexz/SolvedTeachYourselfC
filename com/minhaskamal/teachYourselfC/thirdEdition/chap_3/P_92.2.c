#include <stdio.h>

int main()
{
    int x;

    printf("\tTip Calculator\n\n");

    for(x=1; x<101; x++)
    {
        printf("for %d tip is: %f, %f & %f", x, x+x*0.1, x+x*0.15, x+x*0.2);

        char c;
        printf("\nWant more?(Y/N)");
        fflush(stdin);
        c = getchar();
        printf("\n\n");
        if(c == 'N'|| c == 'n') break;
    }

    return 0;
}
