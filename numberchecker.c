#include <stdio.h>

int main()
{

int num = 0;


printf("Enter a number to get a result! Currently 1-12 are supported\n");
scanf("%d", &num);
switch(num)
{
   case 1 :
        printf("One! Uno! January! enero!");
        break;
   case 2 :
        printf("Two! Dos! February! febrero!");
        break;
   case 3 :
        printf("Three! Tres! March! marzo!");
        break;
   case 4 :
        printf("Four! Cuatro! April! abril!");
        break;
   case 5 :
        printf("Five! Cinco! May! mayo!");
        break;
   case 6 :
        printf("Six! Seis! June! junio!");
        break;
   case 7 :
        printf("Seven! Siete! July! julio!");
        break;
   case 8 :
        printf("Eight! Ocho! August! agosto!");
        break;
   case 9 :
        printf("Nine! Nueve! September! septiembre!");
        break;
   case 10 :
        printf("Ten! Diez! October! octubre!");
        break;
   case 11 :
        printf("Eleven! Once! November! noviembre!");
        break;
   case 12 :
        printf("Twelve! Doce! December! diciembre!");
        break;
   default:
        printf("WERE YOU NO LISITENING");
}
}
