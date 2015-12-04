#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if(argc!=3)
    {
        printf("Usage: find <file name> <ch>\n");
        exit(1);
    }

    if((fp = fopen(argv[1], "r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch==*argv[2])
        {
            printf("%c found",ch);
            break;
        }
    }

    if((ch = fgetc(fp)) == EOF) printf("%c not found!", *argv[2]);

    fclose(fp);

    return 0;
}
