#include<stdio.h>

int factorial(int num);

int main(void)
{
    int num = 5;
    printf("Factorial of %d is %d\n" , num , factorial(num)); 
}

int factorial(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num -1);
    }
}