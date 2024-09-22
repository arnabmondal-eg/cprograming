#include <stdio.h>

int evenfnc(int even[], int evenmax)
    {
    int cntr = 0;
    int evensum = 0;
    float avg = 0;

    for(cntr = 0; cntr < evenmax; cntr++)
	{
	evensum = even[cntr] + evensum;
	}
    avg = evensum / cntr;
    printf("Sum of Even Numbers = %d Average  = %.3f\n", evensum, avg);
    return evensum;
    }

int oddfnc(int odd[], int oddmax)
    {
    int cntr = 0;
    int oddsum = 0;
    float avg = 0;

    for(cntr = 0; cntr < oddmax; cntr++)
	{
	oddsum = odd[cntr] + oddsum;
	}
    avg = oddsum / cntr;
    printf("Sum of Odd Numbers = %d Average  = %.3f\n", oddsum, avg);
    return oddsum;
    }
    
int main()
{
int numofnum = 0;
int cntr = 0;
int num = 0;
int evenmax = 0;
int oddmax = 0;
int sum = 0;
int odd[200];
int even[200];

printf("\nNumber of Numbers = ");
scanf("%d", &numofnum);


for(cntr = 0; cntr < numofnum - 1; cntr++)
    {
    printf("Number %d = ", cntr);
    scanf("%d", &num);
    if(num % 2 == 0)
	{
	even[evenmax] = num;
        evenmax++;
	}
    else
	{
	odd[oddmax] = num;
	oddmax++;
	}
    }
sum = evenfnc(even, evenmax);
sum = sum + oddfnc(odd, oddmax);
printf("total = %d", sum);
}
