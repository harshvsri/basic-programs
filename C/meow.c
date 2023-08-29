#include<stdio.h>

//Function decleration.
void meow(void)
{
    printf("Meow\n");
}

int main(void)
{
    int num , i=0;
    printf("Enter number of Meows : ");
    scanf("%d" , &num);
    /*
    while(i < num)
    {
        printf("Meow\n");
        i++;
    }
    */
    for (i=0 ; i<num ; i++)
    {
        meow();    //Function call.
    }
}

