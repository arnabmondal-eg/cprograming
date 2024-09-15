#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int value = 0;
    int guess = 0;
    int t = 0;
    int cntr = 0;
    int fails = 0;
    char choice = 0;

    
    srand((unsigned)time(NULL));

    value = rand(  ) % 100;
    
    if(value % 2 == 0)
            {
                 printf("Hint! The number is Even! \n");
             }
        else
            {
                 printf("Hint! The number is Odd! \n");
            }
    
    for(cntr = 1; cntr <= 5; cntr = cntr + 1)
    {
        printf("Geuss \n");
        scanf("%d", &guess);
        
        
        
        if(fails == 5)
            {
                printf("Sorry, but you lost. Try agian? Y or N \n");
                scanf("%c", &choice);
                if(choice == 'Y')
                    {
                        cntr = 1;
                    }
                else
                    {
                    
                    }
                if(choice == 'N')
                    {
                        break;
                    }           
            }
        if(guess < value)
            {
                printf("Too Small, Guess Again \n");
                fails = fails + 1;
            }
        else if(guess == value)
            {
                printf("Correct! Play Again?  \n");
                break;
            }
        else
            {
                printf("Too Big, Guess Again \n");
                fails = fails + 1;
            }

    }
} 
