#include<stdio.h>

int main ()
{
    int answer;

    printf("What is 10 + 14?\n");
    scanf("%d", &answer);

    if (answer == 24) printf("Right!");
    else printf("Sorry you are wrong.\nThe answer is 24.");

    return 0;
}
