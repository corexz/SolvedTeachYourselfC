#include <stdio.h>

int main ()
{
    int p;
    printf("Enter your number: ");
    scanf("%d", &p);

    int i, j;
    for(i=2; i<=p/2; i=i+1){
                           if(p%i==0) printf("%d,  ",i);
                          }

    return 0;
}
