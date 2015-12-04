//An Electronic Card Catalog
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int menu();
void display(int i);
void author_search();
void title_search();
void enter();
void save();
void load();

struct catalog
{
    char name[80];
    char title[80];
    char pub[80];
    unsigned date;
    unsigned char ed;
} cat[MAX];

int top=0;

int main()
{
    int choice;

    load();

    do
    {
        choice = menu();

    }
}

void display(int i)
{
    printf("%s\n", cat[i].title);
    printf("by %s\n", cat[i].name);
    printf("Published by %s\n", cat[i].pub);
    printf("Copyright: %u, %u edition\n", cat[i].date, cat[i].ed);
}

void load()
{
    FILE *fp;


}

void save()
{
    FILE *fp;


}
