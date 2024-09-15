#include <stdio.h>

void ftoc(float usrstart, float usrincrement, float usrmaxval)
{
float cntr= 0;
float f = 0;
float c =0;

for (cntr = usrstart; cntr <= usrmaxval; cntr = cntr + usrincrement)
    {
    f = cntr;
    c = (f-32)/(9/5);
    printf("\n F = %.2f C = %.2f",f,c);

    }
printf("\n");
}

int main ()
{
float usrstart = 0;
float usrincrement = 0;
float usrmaxval = 0;

printf("Start = ");
scanf("%f",&usrstart);
printf("\nIncrement = ");
scanf("%f",&usrincrement);
printf("\nMax Value = ");
scanf("%f",&usrmaxval);
ftoc(usrstart, usrincrement, usrmaxval);
}
