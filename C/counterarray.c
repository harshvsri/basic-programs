#include<stdio.h>

int counter(int *array , int length);
int sum(int *array , int length);

int main(void)
{
    int num[5];
    
    for(int i=0; i<5; i++)
    {
        printf("Enter the value : ");
        scanf("%d" , &num[i]);
    }
    printf("Sum of all values is : %d\n" , sum(num , 5));
    printf("Num of positive values : %d\n" , counter(num , 5));
}   

int counter(int *num, int length)
{
    int counter = 0;
    for(int i=0; i<length; i++)
    {
        if(num[i] > 0)
        {
            counter++;
        }
    }
    return counter;
}

int sum(int *array , int length)
{
    int sum = 0;
    for(int i=0; i<length; i++)
    {
        sum += array[i];
    }
    return sum;
}

