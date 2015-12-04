//it finds all prime number in its domain

#include <stdio.h>

int main ()
{
    long long int s,f;   //starting & finishing number

    printf ("Enter your starting number: ");
    scanf ("%lld", &s);

    printf ("Enter your finishing number: ");
    scanf ("%lld", &f);

    if (s>f) printf("Wrong information!\a\nstarting number is bigger.\a\n");   //starting number should be smaller than finishing number
    else if (s<2 || f<3) printf ("\aError!\a");   //I have done this to save more time

    else
    {
        printf("\nThe first prime is: 2\nYour requirements are given bellow:\n\n");

        long long int x, w;

        if(s%2==0) w=(s+1);   //I have made starting number odd, this will save time
        else w=s;

        for(x=w; x<=f; x=x+2)   //the program will work only with odd numbers
        {
            long long int y, z=1;   //here z is the flag
            for (y=3; y<=sqrt(x); y=y+2)
            {
                if(x%y==0) z=0;
            }
            if (z==1) printf("%lld,\t",x);
        }
        printf("\n\n");
    }

    return 0;
}



