#include<stdio.h>
int main(void)
{
    char ch = 'A';
    int num1 = 12;
    float num2 = 12.34;
    double num3 = 12.45654;

    printf("Size of char is %d bytes.\n" , sizeof(ch));
    printf("Size of int is %d bytes.\n" , sizeof(num1));
    printf("Size of float is %d bytes.\n" , sizeof(num2));
    printf("Size of double is %d bytes.\n" , sizeof(num3));
}