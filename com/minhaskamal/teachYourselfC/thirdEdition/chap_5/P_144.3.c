#include <stdio.h>

int main()
{
	int a, b, c;
	float i[100], t;

	printf("Enter the numbers: ");
	scanf("%d", &c);
	for(a=0; a<c; a++) scanf("%f", &i[a]);

	for(a=1; a<c; ++a) for(b=c-1; b>=a; --b)
	{
	    if(i[b-1] > i[b])
	    {
	        t=i[b-1];
	        i[b-1]=i[b];
	        i[b]=t;
	    }
	}

    for(a=0; a<c; a++) printf("%f ", i[a]);

	return 0;
}

