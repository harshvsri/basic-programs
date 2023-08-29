#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int random;
    int num;
    int guess=0;

    srand(time(0));
    random = rand()%100;

    printf("***GUESS THE NUMBER***\n");

    while(num != random)
    {
        printf("Enter a number(1 - 100) : ");
        scanf("%d" , &num);
        guess++;
        
        if(num>random)
        {
            printf("LOWER\n");
        }
        else if(num<random)
        {
            printf("HIGHER\n");
        }
        else
        {
            printf("CONGRATULATIONS !!! YOU WON\n");
            printf("Total Guesses : %d" , guess);
        }
    }
}