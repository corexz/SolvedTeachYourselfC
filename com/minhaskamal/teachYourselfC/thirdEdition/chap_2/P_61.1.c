#include <stdio.h>

int main ()
{
	int x;
	
	for(x=1; x<11; x++) printf("%d\t%d\t%d\n", x, x*x, x*x*x);
	
	return 0;
}
