#include <stdio.h>

int main ()
{
	int i=10, j;
	
	j=i++;
	
	//this will print 11 10
	printf("i and j: %d %d\n", i, j);
	
	return 0;
}
