#include <stdio.h>

int main ()
{
    int a, c, again;

    for(c=1; c<11; c++){
        printf("What is %d + %d?\n", c, c);
        scanf("%d", &a);

        if(a == c+c) printf("Right!\n\n");\
        else{
            printf("Sorry you are wrong!\nTry again.\n");

            printf("What is %d + %d?", c, c);
            scanf("%d", &a);

            if(a == c+c) printf("Right!\n\n");
            else printf("Wrong! the answer is %d\n\n.", c+c);
        }
    }
    return 0;
}
