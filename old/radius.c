#include <stdio.h>
// Main function to calculate the area of a circle using the radius provided by the user.
int main ()
{
    float a;
    float r;
    float pi = 3.14159256;


    printf("Radious : ");
    scanf("%f", &r);
    
        a = pi * r * r;
    
    printf("Area = %f", a);
}
