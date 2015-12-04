#include <stdio.h>

int main()
{
    int i, j;
    int s[20];
    printf("Enter your numbers(20):\n");
    for(i=0; i<20; i++) scanf("%d", &s[i]);

    int m[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(i=0; i<20; i++) for(j=i; j<20; j++) if(s[i]==s[j]) m[i]=m[i]+1;

    int k=m[0];
    for(i=0; i<20; i++) if(m[i]>=k) k=m[i];

    int l=0;
    for( i=0; i<20; i++)
    {
        if(m[i]==k && s[i]!=l)
        {
            l=s[i];
            printf("\nThe mode is: %d", s[i]);
        }
    }

    printf("\n\n");

    return 0;
}
