#include <stdio.h>

int main()
{
//number is user entered value
//value is after each opperation

    int number = 0;
    int value1 = 0;
    int value2 = 0;
    int value3 = 0;
    int answer = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    answer = number * number * number * number * number + 3 * number * number - 10;


    printf("Your finnal number is %d \n", answer);
}