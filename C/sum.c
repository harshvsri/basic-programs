// Sum of two numbers a and b.
#include<stdio.h>
int main()
{
    int a ,b;

    printf("Enter a : ");
    scanf("%d" , &a);

    printf("Enter b : ");
    scanf("%d" , &b);

    int sum = a + b;
    printf("Sum of a and b is : %d" , sum);
    return 0;
}