#include <stdio.h>

int main()
{
	int i, j, t[4][5];

	for(i=0; i<4; i++) for(j=0; j<5; j++) t[i][j]=i*j;

	for(i=0; i<4; i++)
	{
	    for(j=0; j<5; j++) printf("%d ", t[i][j]);
	    printf("\n");
	}

	return 0;
}

