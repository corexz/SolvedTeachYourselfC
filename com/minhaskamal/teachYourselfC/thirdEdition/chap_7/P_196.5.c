 //this program reads number of characters except 'enter'
//then it shows the number of characters

#include <stdio.h>

void strlen();

char c[101];

int main()
{
    printf("Enter the string not more than 100 chars(press 'enter' to quit): ");
    gets(c);

    printf("The length is: ");
    strlen();
    printf("\n\n");

    return 0;
}

void strlen()
{
    int a;
    for(a=0; c[a]; a++);

    printf("%d", a);

    return ;
}



/*int main()
{
    printf("Enter the string (press 'enter' to quit): ");

    int a=-1;
    char c='a';

    for( ;c!='\n' ; )
    {
        scanf("%c", &c);
        a=a+1;
    }

    printf("%d", a);

    return 0;
}*/
