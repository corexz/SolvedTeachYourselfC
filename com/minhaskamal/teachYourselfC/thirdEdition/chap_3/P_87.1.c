#include <stdio.h>

int main()
{
    int a, c, cha, r;

    for(c=200; c<211; c++)
    {
        printf("What is %d + %d? ", c+1, c+9);
        scanf("%d", &a);

        if(a == c+1+c+9) printf("Right!\n\n");
        else
        {
            printf("Sorry, you're wrong.\nTry again.\n");

            r = 0;

            for(cha=0; cha<2 && !r; cha++)
            {
                printf("What is %d + %d? ", c+1, c+9);
                scanf("%d", &a);

                if(a == c+1+c+9)
                {
                    printf("Right!\n\n");
                    r = 1;
                }
            }
        if(!r) printf("You lose!\nThe answer is %d.\n\n", c+1+c+9);
        }
    }
    return 0;
}
