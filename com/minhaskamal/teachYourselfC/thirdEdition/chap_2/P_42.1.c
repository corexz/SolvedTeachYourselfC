#include <stdio.h>

int main ()
{	
	int answer;
	
	printf ("What is 10 + 14?\n");
	scanf ("%d", &answer);
	
	if(answer == 10+14) printf("Right !\n");
	else printf("Wrong !\n");
	
	return 0;
}
