#include <stdio.h>

int main ()
{
    int m, n;

    printf("Enter youn number: ");
    scanf("%d", &m);

    for(n=m; n>0; n--) printf("%d\n", n);
    printf("\a\a");

    return 0;
}
