#include <stdio.h>
#include <math.h>
#include <complex.h>

void roots(float a, float b, float c)
    {
    float root = 0;
    float rootneg = 0;
    int discriminant = 0;
    int roots = 0;

    discriminant = (b * b) - (4 * a * c);
    
    if(discriminant < 0)      //2 imiginary roots//
    {
    root = (-b + csqrtf(discriminant)) / (2*a);
    rootneg = (-b - csqrtf(discriminant)) / (2*a);
    printf("\nRoot 1 = %.3f Root 2 = %.3f\n", root, rootneg);
    }
    
    else if(discriminant == 0)      //1 positive root//
    {
    root = (- b - sqrt(discriminant)) / (2*a);
    printf("\nRoot 1 = %.3f\n", root);
    }
    
    else if(discriminant > 0)       //2 positive roots//
    {
    printf("log >0");
    root = (-b + sqrtf(discriminant)) / (2*a);
    rootneg = (-b - sqrtf(discriminant)) / (2*a);
    printf("\nRoot 1 = %.3f Root 2 = %.3f\n", root, rootneg);
    }
    }

int main()
{
float a = 0;
float b = 0;
float c = 0;

printf("A = ");
scanf("%f", &a);
printf("B = ");
scanf("%f", &b);
printf("C = ");
scanf("%f", &c);
roots(a, b , c);
}
