#include<stdio.h>
#include<math.h>
int main(void)
{
    printf("\nCONVERTER\n");
    
    int option;
    printf("1.Decimal to Binary\n");
    printf("2.Binary to Decimal\n");
    printf("Select an option : ");
    scanf("%d" , &option);

    if(option==1)
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

    else if(option==2)
    {
        printf("\nBINARY TO DECIMAL CONVERTER\n");
    
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
    }

    else
    {
        printf("INVALID INPUT");
    }
}