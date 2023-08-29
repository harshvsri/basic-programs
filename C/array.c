#include<stdio.h>
int main(void)
{
    int num[5];

    for( int i=0; i<5; i++)
    {
        printf("Enter the marks of Roll no. %d : " , i+1);
        scanf("%d" , &num[i]);
    }

    for( int i=0; i<5; i++)
    {
        printf("Marks of Roll no. %d is %d.\n" , i+1, num[i]);
    }

    for( int i=0; i<5; i++)
    {
        printf("Address of Mark %d is %p.\n" , i+1, &num[i]);
    }

    for( int i=0; i<5; i++)
    {
        printf("Size of Mark %d is %d bytes.\n" , i+1, sizeof(num[i]));
    }

  

}