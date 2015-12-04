#include <stdio.h>

void circle ();
void rechtangle ();
void triangle ();

int main ()
{
    char c;
    printf("What is the shape of the area?\n\t");
    printf("\t(Circle, Rectangle, Triangle) Enter first letter: ");
    scanf("%c", &c);

    if(c=='C' || c=='c') circle ();
    else if(c=='R' || c=='r') rechtangle ();
    else if(c=='T' || c=='t') triangle ();
    else printf("Wrong information!\a\a\n");

    return 0;
}

void circle ()
{
    int r;
    printf("\nEnter the radious of the area: ");
    scanf("%d", &r);

    printf("The area of the circle is: %f\n", 3.1416*r);

    return 0;
}


void rechtangle ()
{
    int l, w;
    printf("\nEnter the length of the area: ");
    scanf("%d", &l);
    printf("\nEnter the width of the area: ");
    scanf("%d", &w);

    printf("The area of the rechtangular is: %d\n", l*w);

    return 0;
}


void triangle ()
{
    int b, h;
    printf("\nEnter the base of the area: ");
    scanf("%d", &b);
    printf("\nEnter the hight of the area: ");
    scanf("%d", &h);

    printf("The area of the triangle is: %f\n", 0.5*b*h);

    return 0;
}

