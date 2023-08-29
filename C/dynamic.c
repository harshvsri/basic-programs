#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    printf("Enter the num of int's : ");
    scanf("%d" , &n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("Enter number : ");
        scanf("%d" , &ptr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("Number is : %d\n" , ptr[i]);
    }

}