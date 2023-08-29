#include<stdio.h>

void reverse(int table[] , int num);

int main(void)
{
    /*int num[10] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = num;

    printf("Address of %d is %p\n" , *ptr , ptr);
    printf("Address of %d is %p\n" , *(ptr+1) , ptr+1);
    printf("Address of %d is %p\n" , *(ptr+2) , ptr+2);
    printf("Address of %d is %p\n" , *(ptr+3) , ptr+3);
    printf("Address of %d is %p\n" , *(ptr+4) , ptr+4);
    printf("%d %p\n" , *(ptr+10), ptr+10);*/

    int num;
    int table[10];

    printf("Table of num : ");
    scanf("%d" , &num);

    for(int i=0; i<10; i++)
    {
        table[i] = num * (i+1);
        printf("%d " , table[i]);
    }

    printf("\n");

    /*for(int i=9; i>=0; i--)
    {
        printf("%d " , table[i]);
    }*/
    reverse(table, 10);
}


void reverse(int table[] , int num)
{
    for(int i=num-1; i<=0; i--)
    {
        printf("%d " , table[i]);
    }
}