#include <stdio.h>

int main()
{
	int *p, q=19999;

	p=&q;

	printf("%d ", *p);
	//printf("\n%d \n", p);

	return 0;
}

