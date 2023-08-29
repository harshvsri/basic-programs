#include<stdio.h>
int main(void)
{
    printf("\nDECIMAL TO BINARY CONVERTER\n");
    
    int num;
    printf("Decimal : ");
    scanf("%d" , &num);
    
    int tempnum = num;
    int counter=0;
    while(tempnum/2 > 0)
    {
        tempnum = tempnum/2;
        counter++;
    }
    
    int bin[counter];
    int i=0;
    while(num > 0)
    {
        int rem = num%2;
        bin[i] = rem;
        num = num/2;
        i++;
    }

    printf("Binary : ");
    for(int i=counter; i>=0; i--)
    {
        printf("%d" , bin[i]);
    }
}