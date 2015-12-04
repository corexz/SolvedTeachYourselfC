#include <stdio.h>

struct s_type
{
    int i;
    char c;
    double d;
    char str[80];
} s;

int main()
{
    printf("Enter an integer: ");
    scanf("%d", &s.i);

    printf("Enter a character: ");
    scanf(" %c", &s.c);

    printf("Enter a float: ");
    scanf("%lf", &s.d);

    printf("Enter a string: ");
    scanf("%s", s.str);

    printf("%d %c %lf %s", s.i, s.c, s.d, s.str);

    return 0;
}
