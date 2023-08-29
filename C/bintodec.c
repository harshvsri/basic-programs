#include<stdio.h>
#include<math.h>
int main(void)
{
    printf("\nDECIMAL TO BINARY CONVERTER\n");
    
    int num;
    printf("Binary : ");
    scanf("%d" , &num);

    int tempnum = num;
    int counter=0;
    while(tempnum > 0)
    {
        tempnum = tempnum/10;
        counter++;
    }
    int bin[counter];

    int tempnum1 = num;
    int i=0;
    while(tempnum1 > 0)
    {
        int rem = tempnum1%10;
        bin[i] = rem;
        tempnum1 = tempnum1/10;
        i++;
    }

    int sum = 0;
    for(int i=0; i<counter; i++)
    {
        sum += bin[i] * pow(2,i);
    }

    printf("Decimal : %d" , sum);

    /*for(int i=0; i<counter; i++)
    {
        printf("%d" , bin[i]);
    }*/

    //int dec[counter];
    /*int sum = 0;
    for(int i=counter; i>=0; i--)
    {
        sum += 
    }*/
}