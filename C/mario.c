//MARIO PYRAMIDS.

#include<stdio.h>
#include<stdlib.h>

/*void main()
{
    int i , j , row , column;
    printf("Enter rows and columns  : \n");
    scanf("%d%d" , &row , &column);
    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<column  ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}*/

/*PROBLEM 1.
/*int main(void)
{
    int i;
    do
    {
        printf("Enter pyramid height : ");
        scanf("%d" , &i);
    }
    while(i<1 || i>8);
    for(int x=0; x<i; x++)
    {
        for(int y=0; y<=x; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}*/

//PROBLEM 2.
int main(void)
{
    int num;
    do
    {
        printf("Enter pyramid height : ");
        scanf("%d" , &num);
    }
    while(num<1 || num>8);
    for(int i=0; i<num; i++)
    {
        for(int k=0; k<=num-i-1; k++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("  ");
        for(int l=0; l<=i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
