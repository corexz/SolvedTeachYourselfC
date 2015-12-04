#include <stdio.h>

int main()
{
	int i;
	char text[10][80];

	for(i=0; i<10; i++)
	{
	    printf("%d: ", i+1);
	    gets(text[i]);
	}

    do
    {
        printf("Enter number of string (1-10): ");
        scanf("%d", &i);
        i--;
        if(i>=0 && i<10) printf("%s\n", text[i]);
    }while(i>=0);


	return 0;
}

