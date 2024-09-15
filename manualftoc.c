#include <stdio.h>


float ftoc(float f)
{
float c = 0;
        c = 5* (f-32)/9;
        return c;
}

int main()
{
float c = 0;
float usrcntr = 0;
float usrmaxval = 0;
float usrincrement = 0;
float cntr = 0;
float maxval = 0;
float increment = 0;

printf("This program is designed to allow you to quickly create a table that converts Fahrenheit to Celsius. Please enter a staring value.\n");
scanf("%f",&usrcntr);
printf("\nThe program will now start from %.2f degrees Fahrenheit. Please enter a increment value\n",usrcntr);
scanf("%f",&usrincrement);
printf("\nThe program will now increment by %.2f degrees Fharenheit. Pleaseenter a maximum value\n",usrincrement);
scanf("%f",&usrmaxval);
printf("The program will start from %.2f degrees Fharenheit covert to Celsius at an increment of %.2f untill %.2f", usrcntr, usrincrement, usrmaxval);

for(cntr = usrcntr; cntr <= usrmaxval; cntr = cntr + usrincrement)
    {
    c = ftoc( cntr );
    printf("F = %.2f C = %.2f \n", cntr, c);
    }
}

