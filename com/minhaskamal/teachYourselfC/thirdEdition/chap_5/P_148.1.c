#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char s1[80], s2[80];

    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);

    printf("%s is %d chars long\n", s1, strlen(s1));
    printf("%s is %d chars long\n", s2, strlen(s2));

    i=strcmp(s1, s2);

    if(!i) printf("The string are equal.\n");
    else if(i<0) printf("%s is less than %s\n", s1, s2);
    else printf("%s is greater than %s\n", s1, s2);

    if(strlen(s1) + strlen(s2) < 80)
    {
        strcat(s1, s2);
        printf("%s\n", s1);
    }

    strcpy(s1, s2);
    printf("%s %s\n", s1, s2);

	return 0;
}

