//Smallest of two.
#include<stdio.h>
int main()
{
    int num1 , num2;
    printf("Enter two numbers : \n");
    scanf("%d%d" , &num1 ,&num2);
    if(num1>num2)
    {
        printf("Smaller number is %d" , num2);
    }
    else
    {
        printf("Smaller number is %d" , num1);
    }
}