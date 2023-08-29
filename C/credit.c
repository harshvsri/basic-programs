#include<stdio.h>
int main(void)
{
    long long num;
    printf("Enter num : ");
    scanf("%lld" , &num);
    
    int i=0;
    long long cc = num;
    while(cc>0)
    {
        cc = cc/10;
        i++;
    }
    if(i!=13 && i!=15 && i!=16)
    {
        printf("INVALID CARD NUMBER\n");
    }
    //Calculating cheaksum.
    long long x = num;
    int total = 0;
    int sum1;
    int sum2;
    int mod1;
    int mod2;
    int d1;
    int d2;


    do
    {
        mod1 = x%10;
        x = x/10;
        sum1 = sum1+mod1;

        mod2 = x%10;
        x = x/10;

        mod2 = mod2 * 2;
        d1 = mod2 % 10;
        d2 = mod2 / 10;
        sum2 = sum2 + d1 + d2;
    }
    while(x>0);
    total = sum1 + sum2;

    // Next check Luhn Algorithm
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Get starting digits
    long long start = num;
    do
    {
        start = start / 10;
    }
    while (start > 100);

}