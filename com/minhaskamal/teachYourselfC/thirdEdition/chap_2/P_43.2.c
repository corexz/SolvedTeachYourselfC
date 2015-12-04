#include <stdio.h>

int main ()
{
	float num;
	int choice;
	
	printf ("Enter value: ");
	scanf ("%f", &num);
	
	printf ("1: Feet to Meters, 2:Meter to Feet. ");
	printf ("Enter choice: ");
	scanf ("%d", &choice);
	
	if(choice == 1) printf("%f\n", num / 3.28);
	if(choice == 2) printf("%f\n", num * 3.28);
	
	return 0;
}
