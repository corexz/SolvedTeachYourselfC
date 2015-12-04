#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;

    if(argc!=3)
    {
        printf("File name is missing.\n");
        exit(1);
    }

    if((from=fopen(argv[1], "r"))==NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    if((to=fopen(argv[2], "w"))==NULL)
    {
        printf("Error writing file.\n");
        exit(1);
    }


    while(!feof(from)) fputc(toupper(fgetc(from)), to);

    fclose(to);
    fclose(from);

    printf("**DONE**\n");

    return 0;
}
