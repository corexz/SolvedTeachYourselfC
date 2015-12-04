#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i, num;

    if((fp=fopen("Ran.txt", "wb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    for(i=0; i<100; i++)
    {
        num=rand();
        printf("%d  ", num);
        fwrite(&num, sizeof num, 1, fp);
    }

    fclose(fp);


    return 0;
}
