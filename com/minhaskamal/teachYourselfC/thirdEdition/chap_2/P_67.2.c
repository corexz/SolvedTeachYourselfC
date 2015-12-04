#include <stdio.h>

int main ()
{
    int r,l,w,t=0;

    printf("Enter number of rooms: ");
    scanf("%d", &r);

    int x;
    for(x=r; x>0; x--) {
    printf("Enter the length: ");
    scanf("%d", &l);

    printf("Enter the width: ");
    scanf("%d", &w);
    t=t+(l*w);
    }

    printf("Total square footage is: %d", t);

    return 0;
}
