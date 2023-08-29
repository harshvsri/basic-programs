#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int dob = 12;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    int outofguess=0;
    printf("!!! GUESS MY DOB !!!\n");

    while(guess!=dob && outofguess==0)
    {
        if(guesscount<guesslimit)
        {
            printf("Enter a date : ");
            scanf("%d" , &guess);
            if(guess>dob)
            {
                printf("Lower\n");
            }
            else if(guess<dob)
            {
                printf("Higher\n");
            }
            else
            {
                printf("CONGRATULATIONS\n");
            }
            guesscount++;
        }
        else
        {
            outofguess=1;
        }
    }
    if(outofguess==1)
    {
        printf("YOU LOOSE :(\n");
    }
    else
    {
        printf("YOW WON :)");
    }
}