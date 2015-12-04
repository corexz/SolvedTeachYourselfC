#include <stdio.h>
//#include <conio.h>

int main()
{
	char mess[80];
	int i;

    printf("Enter message (lees than 80 chars): ");
    gets(mess);

    printf("\n");

    for(i=0; mess[i]; i++) printf("%c", mess[i]+1);

	return 0;
}

