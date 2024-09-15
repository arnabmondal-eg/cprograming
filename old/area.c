#include <stdio.h>


int main ()
{
float l;
float w;
float a;

printf("Enter value of length:  ");
scanf("%f", &l);

printf("Enter value of width:  ");
scanf("%f", &w);

a = l*w;

printf("With the width of %f and the length of %f, the area is %f \n", w, l, a);
}