#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *f;

    if(argc!=2)
    {
        printf("File name is missing.\n");
        exit(1);
    }

    if((f=fopen(argv[1], "r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    for( ; ; )
    {
        int l;
        printf("Enter serial number of line: ");
        scanf("%d", &l);

        int i;
        for(i=1; fgetc(f)!=EOF; i++)
        {
            char line[101];
            fgets(line , 100, f);

            if(i==l)
                {
                    printf(line);
                    printf("\n");
                    break;
                }
        }
        if(fgetc(f)==EOF) printf("The line does not exist.\n");

        char c;
        fflush(stdin);
        printf("Do you want to continue? (Y/N)");
        scanf("%c", &c);

        if(toupper(c)=='N') break;

        rewind(f);
    }

    fclose(f);

    return 0;
}
