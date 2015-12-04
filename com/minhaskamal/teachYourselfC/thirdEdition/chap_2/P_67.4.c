#include <stdio.h>

int main ()
{
    int a, c, r=0, w=0;

    for(c=25; c<36; c++){
    printf("What is %d+%d?  ", c, c);
    scanf("%d", &a);

    if(a==c+c){
        printf("Right!\n");
        r++;
        }

    else{
        printf("Wrong!\a \nThe answer is %d.\n", c+c);
        w++;
        }
    }

    printf("You got %d right & %d wrong.\n\n", r,w);

    return 0;
}
