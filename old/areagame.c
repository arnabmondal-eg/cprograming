#include <stdio.h>


int main ()
{
float l;
float w;
float a;
float b;
float s;
float c;

printf("Enter value of length:  ");
scanf("%f", &l);

printf("Enter value of width:  ");
scanf("%f", &w);

a = l*w;

printf("Area=%f\n",a);
if (a == 100)
    {
    printf("Correct\n");
    }
else
    {
    if (a > 100)
        {
        printf("Too Big\n");
        } 
    else
        {
        printf("Too Small\n");
        }
    }
} 
