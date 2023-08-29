// ROCK PAPER SCISOR
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int random;
    char comp;
    char player;
    
    srand(time(0));
    random = rand()%3;

    if(random == 0)
    {
        comp = 'r';
    }
    else if(random == 1)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("ROCK PAPER SCISOR\n");
    printf("Enter r/p/s : ");
    scanf("%c" ,&player);

    if(comp == player)
    {
        printf("TIE\n");
    }
    else if(comp == 'p' && player == 'r')
    {
        printf("YOU LOOSE :(\n");
    }
    else if(comp == 's' && player == 'p')
    {
        printf("YOU LOOSE :(\n");
    }
    else if(comp == 'r' && player == 's')
    {
        printf("YOU LOOSE :(\n");
    }
    else
    {
        printf("YOU WON :)\n");
    }

    printf("You chose %c\n" , player);
    printf("Computer chose %c\n" , comp);

}


