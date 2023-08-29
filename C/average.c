#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int score[n];
    float sum=0;
    printf("Enter num of scores to input : ");
    scanf("%d" , &n);
    
    for( int i=0 ; i<n ; i++)
    {
        printf("Enter scores : \n");
        scanf("%d" , &score[i]);
        sum = sum+score[i];
    }
    printf("Average is %f\n" , sum/n);
    return 0;
}