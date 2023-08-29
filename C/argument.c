#include<stdio.h>
int main(void)
{
    int a=3;
    printf("%d %d %d" , a, ++a, a++);
    //Argument inside printf passes from right to left.
    //                   <------
}