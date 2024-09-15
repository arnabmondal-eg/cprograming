#include <stdio.h>

void area(int numofcircles)
    {
    float radius = 0;
    int cntr = 0;
    float area = 0;

    for(cntr = 1; cntr <= numofcircles; cntr++)
	{
	if(cntr == 1)
	    {
	    printf("\nRadius of Circle 1 = ");
	    scanf("%f", &radius);
	    area = 3.14159*radius*radius;
	    printf("Area = %.3f", area);
	    area = 0;
	    radius = 0;
	    }
	else
	    {
	    printf("\nRadius of Circle %d = ", cntr);
	    scanf("%f", &radius);
	    area = 3.14159*radius*radius;
	    printf("Area = %.3f", area);
	    area = 0;
	    radius = 0;
	    }
	 }
    }

int main()
{
int numofcircles = 0;

printf("Number of Circles = ");
scanf("%d", &numofcircles);
area(numofcircles);
}
