#include <stdio.h>

int main ()
{
	int num ;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	if (num < 0) printf ("Number is negative.\n");
	if (num > 0) printf ("Number is non-negative.\n");
	
	return 0;
} 
