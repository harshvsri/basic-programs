#include<stdio.h>

int main(void)
{
    float regular , percent_off , sale;
    printf("Regular price : ");
    scanf("%f" , &regular);
    printf("Percent off : ");
    scanf("%f" , &percent_off);
    sale = regular * (100-percent_off)/100;
    printf("Sale Price : %.2f" , sale);  //%.2f shows teo decimal places.
}
