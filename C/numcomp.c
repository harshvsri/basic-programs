#include<stdio.h>
int main(void)
{
    int a , b , c , d;
    printf("Enter the value of a : ");
    scanf("%d" , &a);
    printf("Enter the value of b : ");
    scanf("%d" , &b);
    printf("Enter the value of c : ");
    scanf("%d" , &c);
    printf("Enter the value of d : ");
    scanf("%d" , &d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("Largest num is : %d" , a);
            }
            
            else
            {
                printf("Largest num is : %d" , d);
            }
        }
        
        else
        {
            if(c>d)
            {
                printf("Largest num is : %d" , c);
            }
            
            else
            {
                printf("Largest num is : %d" , d);
            }
        }
    }
    
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("Largest num is : %d" , b);
            }
            
            else
            {
                printf("Largest num is : %d" , d);
            }
        }
        
        else
        {
            if(c>d)
            {
                printf("Largest num is : %d" , c);
            }
            
            else
            {
                printf("Largest num is : %d" , d);
            }
        }
    }
}