#include<stdio.h>
int main(void)
{
    int num;
    int prime = 0;
    printf("Input a number(int) : ");
    scanf("%d" , &num);

    if( num<=1 )
    {
        printf("NOT PRIME\n");
    }
    
    else
    {
        for(int i=2; i<num; i++)
        {
            if( num % i == 0)
            {
                prime = 1;
                break;
            }
        }
        if(prime == 1 && num != 2)
        {
            printf("NOT PRIME\n");
        }
        else
        {
            printf("PRIME\n");
        }
    }
}
