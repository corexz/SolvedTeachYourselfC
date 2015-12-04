#include <stdio.h>

void f1();
void f2();

int main()
{
    f1();

    return 0;
}

void f1()
{
    int count;

    for(count=0; count<10; count++) f2();
}

void f2()
{
    int count;

    for(count=0; count<10; count++) printf("%d ", count);
}
