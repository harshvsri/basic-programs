#include<stdio.h>

void printName(int count);

int main(void)
{
    printName(100);
}

void printName(int count)
{
    if(count == 1)
    {
        return;
    }
    printf("Kuldeep Aman Harsh ");
    printName(count-1);
}