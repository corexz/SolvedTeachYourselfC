 #include <stdio.h>

double avg(float *f);

int main()
{
    float n[10];

    int i;
    for(i=0; i<10; i++)
    {
        printf("%d.Enter the number: ", i+1);
        scanf("%f", &n[i]);
    }

    printf("\nThe average is: %lf\n", avg(n));

    return 0;
}

double avg(float f[])//*f)
{
    double d;

    d=(f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]+f[8]+f[9])/10;
    //d=(*(f) + *(f+1) + *(f+2) + *(f+3) + *(f+4) + *(f+5) + *(f+6) + *(f+7) + *(f+8) + *(f+9))/10;

    return (d);
}
