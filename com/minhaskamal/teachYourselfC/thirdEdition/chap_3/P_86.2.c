#include <stdio.h>

int main()
{
    printf("\t\t\tWelcome to B.F.C\n\t\tWe offer quality but cheap food\n\n\n\n");
    printf("To day's menu-\n\t1.Chicken Fry\n\t2.Chicken Biriani\n\t3.Kachchi Biriani\n\t");
    printf("4.Pizza\n\t5.Chicken Role\n\t6.Vegitable Khichuri\n\t7.Vegetable Soup\n\n");

    int x;
    do
    {
        printf("\nEnter your choice(1-7): ");
        scanf("%d", &x);
    }while(x<1 || x>7);

    printf("\n\n");

    if(x==1) printf("The price is 300/piece.");
    else if(x==2) printf("The price is 400/plate.");
    else if(x==3) printf("The price is 400/plate.");
    else if(x==4) printf("The price is 200/piece.");
    else if(x==5) printf("The price is 100/piece.");
    else if(x==6) printf("The price is 200/plate.");
    else if(x==7) printf("The price is 280/dish.");

    printf("\n\nEat by heart!\nCome again.\n\n\n\n");

    return 0;
}
