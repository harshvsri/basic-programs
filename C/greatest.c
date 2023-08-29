//To find greatest number.
#include<stdio.h>
int main()
{
    int num1 , num2 , num3;
    printf("Enter three numbers : \n");
    scanf("%d" , &num1);
    scanf("%d" , &num2);
    scanf("%d" , &num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("\n Largest number = %d" , num1);
        }
        else
        printf("\n Largest number = %d" , num3);
    }
    else if(num2>num3)
    {
        printf("\n Largest number = %d" , num2);
    }
    else
    {
        printf("\n Largest number = %d" , num3);
    }
    return 0;
}
