#include<stdio.h>
int main(void)
{
    int num;
    int prime = 0;
    printf("Enter a number : ");
    scanf("%d" , &num);

    for(int i=2; i<num; i++)
    {
        prime = 0;
        if( num % i == 0)
        {
            prime = 1;
            break;
        }
    }

    if( prime == 1)
    {
        printf("NOT PRIME");
    }
    else
    {
        printf("PRIME");
    }
}