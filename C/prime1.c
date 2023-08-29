#include<stdio.h>
int main(void)
{
    int range;
    int prime = 0;
    printf("Enter the range : ");
    scanf("%d" , &range);

    for(int i=2; i<range; i++)
    {
        for(int j=2; j<i; j++)
        {
            prime = 0;
            if( i % j == 0)
            {
                prime = 1;
                break;
            }
        }
        if(prime != 1)
        {
            printf("%d " , i);
        }
    }
}