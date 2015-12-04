#include <stdio.h>
#include <string.h>

int main()
{
	char bigstr[1000] = "", s[90];

	for( ; ; )
	{
	    printf("Enter a string: ");
	    gets(s);

	    if(!strcmp(s, "quit")) break;

	    strcat(s, "\n");

	    if(strlen(bigstr)+strlen(s) >= 1000) break;

	    strcat(bigstr, s);
	}

    printf(bigstr);

	return 0;
}

