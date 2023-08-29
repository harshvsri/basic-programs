//CASH.

#include<stdio.h>
#include<math.h>
int main(void)
{
    int change;
    do
    {
        printf("Enter amount : ");
        scanf("%d" , &change);
    } 
    while (change<1 || change>99);
    int coin;
    int coin1 = change/25;
    int change1 = change%25;
    int coin2 = change1/10;
    int change2 = change1%10;
    int coin3 = change2/5;
    int change3 = change2%5;
    int coin4 = change3/1;
    coin = coin1+coin2+coin3+coin4;
    printf("%d\n" , coin);
    printf("25s : %d\n" , coin1);
    printf("10s : %d\n" , coin2);
    printf("5s : %d\n" , coin3);
    printf("1s : %d\n" , coin4);
}