#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" , &num);

    //Counting num of digits.
    int n=0;
    int temp=num;
    int temp2=num;
    double sum=0;
    int rem;
    while(temp>0)
    {
        temp = temp/10;
        n++;
    }
    
    while(temp2>0)
    {
        rem = temp2%10 ;
        sum = sum + pow(rem,n);
        temp2 = temp2/10;
    }

    if(sum == num)
    {
        printf("ARMSTRONG NUMBER");
    }
    else
    {
        printf("NOT AN ARMSTRONG NUMBER");
    }
    return 0;
}