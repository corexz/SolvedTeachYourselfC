#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char com[80], t[80];
	int i, j;

    for( ; ; )
    {
        printf("Operator? ");
        gets(com);

        if(!strcmp(com, "quit")) break;

        printf("Enter first number: ");
        gets(t);
        i=atoi(t);

        printf("Enter second number: ");
        gets(t);
        j=atoi(t);

        if(!strcmp(com, "add")) printf("%d\n", i+j);
        else if(!strcmp(com, "subtract")) printf("%d\n", i-j);
        else if(!strcmp(com, "divide"))
        {
            if(j);
            printf("%d\n", i/j);
        }
        else if(!strcmp(com, "multiply")) printf("%d\n", i*j);
        else printf("UnKnown command. \n");
    }

	return 0;
}

