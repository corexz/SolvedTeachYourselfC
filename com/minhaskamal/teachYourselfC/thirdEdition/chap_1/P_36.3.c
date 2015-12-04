#include <stdio.h>

float o_to_c(float o);

int main ()
{
 float ounces;
 float cups;

 printf("Enter ounces: ");
 scanf("%f", &ounces);

 cups = o_to_c (ounces);
 printf("%f cups\n", cups);

 return 0;
}

 float o_to_c(float o)
{
 return o/8;
}
