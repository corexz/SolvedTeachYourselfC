#include <stdio.h>
#include <string.h>

char s[][2][40]=
{
    "apple", "a fruit",
    "bird", "an animal which flies",
    "cat", "a small animal",
    "doll", "children play with it",
    "elephant", "a large animal",
    "flower", "a beautiful part of tree",
    "garden", "a place where we cultivate plants"
};


int main()
{
    char w[20];

    printf("Enter the word: ");
    gets(w);

    printf("Meaning: ");

    int i;
    for( i=0; i<7; i++)
    {
        if(!strcmp(w, s[i][0]))
        {
            printf(s[i][1]);
            break;
        }
    }
    if(i>6) printf("Not found!");

    printf("\n\n");
    return 0;
}
