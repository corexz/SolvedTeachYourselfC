#include <stdio.h>
#include <string.h>

int main()
{
    printf("There is a magic word here.\n");
    printf("Try to guess the word.\n");
    printf("You will get 10 chances & 5 clues.\n");

    char a[20];
    char c[][80]=
     {
         "Clue No-1: You are surrounded with it.",
         "Clue No-2: The word consists of 8-10 alphabets.",
         "Clue No-3: It is one of the most frequently used words in modern age.",
         "Clue No-4: It is called the applied part of science.",
         "Clue No-5: You cannot go even a single day with out it.",
     };

    int i, j;

    for(i=1; i<6; i++)
    {
        printf("\n");
        printf(c[i-1]);
        printf("\n");

        for(j=1; j<3; j++)
        {
            printf("Guess: ");
            gets(a);
            if(!strcmp(a, "technology")) goto result;
            else printf("Wrong!\n");
        }
    }

    result:
        if(i*j==18) printf("\nSorry you could not guess.\nThe word was 'technology'.");
        else
        {
            printf("\nCongratulation! \nYou have won.\n");
            printf("\nYour point is: %d", 10- 2*(i-1)-(j-1));
        }

    printf("\n\n\n");

    return 0;
}
