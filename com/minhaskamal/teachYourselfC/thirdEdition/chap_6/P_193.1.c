//this program adds two string & prints one string

#include <stdio.h>

void mystrcat();

char a[101];
char b[101];

int main()
{
    printf("Enter first string in 100 chars (press 'enter' to quit): ");
    gets(a);

    printf("Enter second string in 100 chars (press 'enter' to quit): ");
    gets(b);

    printf("\nAfter string catenation: ");
    mystrcat();
    printf("\n\n");

    return 0;
}

void mystrcat()
{
   int w=0;
    char c[202];

    int y=0;
    for( ; a[w]; )
    {
        c[y] = a[w];
        w++;
        y++;
    }

    int z=y, x=0;
    for( ; b[x]; )
    {
        c[z] = b[x];
        x++;
        z++;
    }
    c[z]=0;

    int v=0;
    for( ; c[v]; v++)printf("%c", c[v]);

    return ;
}

