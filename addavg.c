#include <stdio.h>

void addavg(int numofnum)
    {
    float sum = 0;
    float avg = 0;
    int times = 1;
    float prvsum = 0;
    float num = 0;
    for(times = 1; times <= numofnum; times++)
	{
	if(times == 1)
	    {   
	    printf("\nNumber 1 = ");
	    scanf("%f", &num);
	    prvsum = num;
	    num = 0;
	    times++;
	    }
	else
	    {
	    printf("\nNumber %d = ",times);
	    scanf("%f", &num);
	    sum = prvsum + num;
	    prvsum = sum;
	    num = 0;
	    times++;
	    }
	}    
    avg = sum / numofnum;
    printf("\nSum = %.2f Avg. = %.2f\n", sum, avg);
    }

int main()
{
int numofnum = 0;
printf("\nAmount of numbers to add = ");
scanf("%d", &numofnum);
addavg(numofnum);
}
