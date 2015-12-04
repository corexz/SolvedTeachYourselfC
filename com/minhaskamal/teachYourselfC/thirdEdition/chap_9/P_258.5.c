#include <stdio.h>

int main()
{
    char str[80];

    printf("Enter the leading digits followed by a string\n");
    //gets(str);
    scanf("%*[0-9]%s", str);
    printf("%s", str);

    return 0;
}
