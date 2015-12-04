#include <stdio.h>

int main()
{
	char *o="one", *t="two", *th="three";

	printf("%s %s %s\n", o, t, th);
	printf("%s %s %s\n", o, th, t);
	printf("%s %s %s\n", t, o, th);
	printf("%s %s %s\n", t, th, t);
	printf("%s %s %s\n", th, o, t);
	printf("%s %s %s\n", th, t, o);

	return 0;
}

