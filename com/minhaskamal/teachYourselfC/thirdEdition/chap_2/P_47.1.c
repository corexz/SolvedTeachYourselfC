#include <stdio.h>

int main()
{
    float num;
    int choice;

    printf("1: Feet to Meters, 2: Meters to Feet.\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1){
                    printf("Enter number of feet: ");
                    scanf("%f",&num);
                    printf("Meter: %f\n", num / 3.28);
                    }
    else{
            if(choice == 2){
                    printf("Enter number of meter: ");
                    scanf("%f",&num);
                    printf("Feet: %f\n", num * 3.28);
                    }
            else printf("Wrong information !\n");
        }

    return 0;
}
