#include <stdio.h>

int prime(int num)
{
int flag = 0;
int divisor = 0;

if(num == 0 || num == 1)
    {
    flag = 1;
    return flag;
    }
for (divisor = 2; divisor <= num/2; divisor++)
    {
    if(divisor == num)
        {
        flag = 1;
        break;
        }
    if(num % divisor == 0)
        {
        flag = 0;
        break;
        }
    }

return flag;
}

int main()
{
int num = 0;
int flag = 0;

printf("\nNumber = ");
scanf("%d",&num);
flag = prime(num);
if(flag == 0)
    {
    printf("\nYour number is not prime");
    }
else
    {
    printf("\nYour number is prime");
    }
}
