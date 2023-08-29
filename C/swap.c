// To swaps values of two variables using a third variable in pointers.
#include<stdio.h>
void swap(int *x , int *y);

int main(void)
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d" , &a);
    printf("Enter value of b : ");
    scanf("%d" , &b);
    printf("BEFORE a = %d and b = %d\n" , a , b);
    swap(&a,&b);
    printf("AFTER a = %d and b = %d\n" , a , b);
}

void swap(int *x , int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}