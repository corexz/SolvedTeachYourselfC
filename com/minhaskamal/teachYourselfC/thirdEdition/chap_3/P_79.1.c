#include <stdio.h>

int main ()
{
    int i;
    char ch;

    ch = 'a';

    for (i=0; ch != 'g'; i++){
        printf("Pass: %d\n", i);
        ch = getchar();
    }
    return 0;
}
