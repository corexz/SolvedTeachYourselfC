#include <stdio.h>

int main ()
{
	int a, c;
	
	for(c=50; c<60; c++){
		printf("What is %d + %d? ", c, c);
		scanf("%d", &a);
		
		if(a==c+c) printf("Right! \n");
		else {
			printf("Sorry, you are wrong.\nThe answer is %d.\n", c+c);
			}
		}
				
	return 0;
	
}
