//To cheak for pass or fail.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your marks(1-100) : \n");
    scanf("%d" , &num);
    // if(num>=0 && num<= 30)
    // {
    //     printf("FAIL");
    // }
    // else if(num>30 && num<=100)
    // {
    //     printf("PASS");
    // }
    // else
    // {
    //     printf("WRONG MARKS!");
    // }
    num <= 30 ? printf("FAIL") : printf("PASS");
    return 0;
}