 //This program can convert one unit to another for as many time as you want

#include <stdio.h>

int main()
{
    printf("This converter converts one unit to another.\n");
    printf("Here is a list for conversion.\n\n\n");

    printf("Choose any by pressing presiding number.\n");
    printf("Length:\n");
    printf("  1.foot to metre\n  2.metre to foot\n");
    printf("  3.inch to centimetre\n  4.centimetre to inch\n");
    printf("  5.mile to kilometre\n  6.kilometre to mile\n");
    printf("Weight:\n");
    printf("  7.kilogram to pound\n  8.pound to kilogram\n");
    printf("  9.ounce to gram\n  10.gram to ounce\n");
    printf("Temperature:\n");
    printf("  11.fahrenheit to kelvin\n  12.kelvin to fahrenheit\n");
    printf("  13.fahrenheit to celsius\n  14.celsius to fahrenheit\n");



    for( ; ; )
    {
        int x;
        printf("\n\nEnter your choice (0 to quit): ");
        scanf("%d", &x);

        if(!x) break;

        float a;

        printf("Enter the value: ");
        scanf("%f", &a);

        if(x==1) printf("The value in metre is: %f", a*0.3048);
        else if(x==2) printf("The value in foot is: %f", a*3.28084);
        else if(x==3) printf("The value in centimetre is: %f", a*2.54);
        else if(x==4) printf("The value in inch is: %f", a*0.3937);
        else if(x==5) printf("The value in kilometre is: %f", a*1.60934);
        else if(x==6) printf("The value in mile is: %f", a*0.62137);
        else if(x==7) printf("The value in pound is: %f", a*2.20462);
        else if(x==8) printf("The value in kilogram is: %f", a*0.45359);
        else if(x==9) printf("The value in gram is: %f", a*28.34952);
        else if(x==10) printf("The value in ounce is: %f", a*0.03527);
        else if(x==11) printf("The value in kelvin is: %f", (((a-32)*5)/9)+273.15);
        else if(x==12) printf("The value in fahrenheit is: %f", ((a-273.15)/5*9)+32);
        else if(x==13) printf("The value in celsius is: %f", ((a-32)*5)/9);
        else if(x==14) printf("The value in fahrenheit is: %f", (a/5*9)+32);

    }

    printf("\n\n");

    return 0;
}
