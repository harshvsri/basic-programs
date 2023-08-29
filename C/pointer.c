#include<stdio.h>
#include<stdlib.h>

void address(int *add);
void printAdd(int x);\
void tenTimes(int *x);
void tenX(int num);

int main(void)
{
    //char grade = 'A';
    int num = 12;
    //printf("%f \n" , pow(2,3)); // 2^3 Two raise to power 3.
    //printf("%f \n" , sqrt(56)); //Square root of number.
    printf("%p\n" , &num); // MEMORY ADDRESS.
    //tenTimes(&num);
    tenX(num);
}

void address(int *add)
{
    printf("%p\n" , add);
}

void printAdd(int x)
{
    printf("%p\n" , &x);
}

void tenTimes(int *x)
{
    int num = *x;
    printf("Ten times of %d id %d" , num, 10*num);
}

void tenX(int num)
{
    int tentimes = 10*num;
    printf("Ten times of %d is %d" , num , tentimes); 
}