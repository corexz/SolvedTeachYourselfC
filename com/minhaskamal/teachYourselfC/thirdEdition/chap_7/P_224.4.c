#include <stdio.h>

void rec(char c);

int main()
{
    rec('Z');

    return 0;
}

void rec(char c)
{
    if (c > 'A') rec(c-1);

    printf("%c ", c);
}


/*#include <stdio.h>

void rec(char c);

int main()
{
    rec('A');

    return 0;
}

void rec(char c)
{
    printf("%c ", c);
    if (c < 'Z') rec(c+1);
}
*/
