#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d" , &num);

    int x=2;
    while(x<sqrt(num))
    {
        if(num%x==0)
        {
            printf("NOT PRIME");
            return 0;
        }
        x++;
    }
    printf("PRIME");
    return 0;
}