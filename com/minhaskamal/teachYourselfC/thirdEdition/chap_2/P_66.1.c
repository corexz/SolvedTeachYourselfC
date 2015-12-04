#include <stdio.h>

int main ()
{
    int m=5009, g=0, i;

    printf("We have a number between 1 to 10000.\n");

    for(i=0; i<10 && g!=m; i++){
        printf("Enter your guess: ");
        scanf("%d", &g);

        if(g==m) printf("Right! \nYou win! \n");
        else if (g<m-2000) printf("Wrong! \nYour guess is very very low. \n");
        else if (g>m+2000) printf("Wrong! \nYour guess is very very high. \n");
        else if (g<m-500) printf("Wrong! \nYour guess is very low. \n");
        else if (g>m+500) printf("Wrong! \nYour guess is very high. \n");
        else if (g<m-100) printf("Wrong! \nYour guess is low. \n");
        else if (g>m+100) printf("Wrong! \nYour guess is high. \n");
        else if (g<m-30) printf("Wrong! \nYour guess is close but low. \n");
        else if (g>m+30) printf("Wrong! \nYour guess is close but high. \n");
        else if (g<m-5) printf("Wrong! \nYour guess is very close but low. \n");
        else if (g>m+5) printf("Wrong! \nYour guess is very close but high. \n");
        else if (g>=m-5 && g<m) printf ("You are so close but low. \n");
        else if (g>m && g<=m+5) printf ("You are so close but high. \n");
    }

    if (g!=m) printf ("You lose! \n");
    return 0;

}
