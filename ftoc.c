#include <stdio.h>

float f = 0;
float c = 0;
int cntr = 0;
float ftoc(float v)
{
        f = v;
        c = 5* (f-32)/9;
        return c;
}

int main()
{
	for(cntr = 0; cntr <= 300; cntr = cntr + 20)
	{
	c = ftoc( cntr );
	printf("F = %.2f C = %.2f \n", f, c);
	}
}
