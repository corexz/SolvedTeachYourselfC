#include <stdio.h>

void f1(int num[5]), f2(int num[]), f3(int *num);


int main()
{
    int count[5]={1,2,3,4,5};

    f1(count);
    printf("\n");
    f2(count);
    printf("\n");
    f3(count);
    printf("\n");

    return 0;
}


void f1(int num[5])
{
    int i;
    for(i=0; i<5; i++) printf("%d ", num[i]);
}


void f2(int num[])
{
    int i;
    for(i=0; i<5; i++) printf("%d ", num[i]);
}


void f3(int *num)
{
    int i;
    for(i=0; i<5; i++) printf("%d ", num[i]);
}
