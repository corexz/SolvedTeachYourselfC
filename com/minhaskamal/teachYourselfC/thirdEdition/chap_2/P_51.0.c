#include<stdio.h>

int main ()
{
	int num, sum=0, prod=1;
	
	for(num=1; num<6; num=num+1) {sum = sum+num;
								  prod = prod*num;}
	printf("Product & Sum: %d, %d \n", prod, sum);
	
	return 0;
}
