#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int i;
    char *p;
    char s[] = "I Love C. Even more than you.";
    p=s;

    if((f = fopen("myfile.txt", "w")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    while(*p)
    {
        if(fputc(*p, f)==EOF)
        {
            printf("Error writing file.\n");
            exit(1);
        }
        p++;
    }

    fclose(f);

    if((f = fopen("myfile.txt", "r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    for( ; ; )
    {
        i=fgetc(f);
        if(i==EOF) break;
        putchar(i);
    }

    fclose(f);

    return 0;
}
