#include<stdio.h>

int sum(int a , int b);
float area(float side);
int average(int a, int b, int c);

int main(void)
{
    printf("Sum is %d\n" , sum(4,5));
    printf("Area is %f\n" , area(4.5));
    printf("Average is %d\n" , average(2,4,6));
}

int sum( int a , int b)
{
    return a+b;
}

float area(float side)
{
    return side*side;
}

int average(int a, int b, int c)
{
    return (a+b+c)/3;
}