#include <stdio.h>
#include <ctype.h>

void str_up(char *p);

int main()
{
    char str[] = "i like it!";

    str_up(str);
    printf(str);

    return 0;
}

void str_up(char *p)
{
    for( ; *p; p++)
    {
        *p = toupper(*p);
    }
}
