#include <stdio.h>
//#include <conio.h>

int main()
{
	char a[10][10] =
	{
	    "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seaven", "Eight", "Nine"
	};
    char n;

    printf("Enter number: ");
    n = getchar();
    printf("\n");

    n=n-'0';
    if(n>=0 && n<10) printf("%s", a[n]);

	return 0;
}

