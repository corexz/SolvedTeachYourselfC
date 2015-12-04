#include <stdio.h>

int main()
{
	int n, i;

	int cube[][3] =
	{
	    1, 1, 1,
	    2, 4, 8,
	    3, 9, 27,
	    4, 16, 64,
	    5, 25, 125,
	    6, 36, 216,
	    7, 49, 343,
	    8, 64, 512,
	    9, 81, 729,
	    10, 100, 1000,
	};

	printf("Enter cube: ");
	scanf("%d", &n);

	for(i=0; i<10; i++) if(cube[i][2] == n)
	{
	    printf("Root: %d\n", cube[i][0]);
	    printf("Square: %d", cube[i][1]);
	    break;
	}

	if(i==10) printf("Cube not found.\n");

	return 0;
}

