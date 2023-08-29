//Practicing for loop.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" , &num);
    for( int i=1 ; i<=10 ; i=i+1)
    {
        printf("%d \n" , num*i);
    }
}