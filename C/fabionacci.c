#include<stdio.h>

int fab(int range);

int main(void)
{
    int range;
    printf("Enter a range : ");
    scanf("%d" , &range);
    
    int a=0;
    int b=1;
    int c=a+b;

    printf("%d %d %d" , a,b,c);

    while(c<range)
    {
        a=b;
        b=c;
        c=a+b;

        if(c<range)
        { 
            printf(" %d" ,c);
        }
    }
    
    

}