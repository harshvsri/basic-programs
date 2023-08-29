#include<stdio.h>
int main(void)
{
    char num[10];
    printf("Input a number : ");
    scanf("%s" , num);

    /*printf("%s\n" , num);
    printf("%c\n" , num[0]);

    printf("%c\n" , num[1]);
    printf("%c\n" , num[2]);*/

    for(int i=0; i<10; i++)
    {
        if( num[i] = '.')
        {
            printf("NOT NATURAL");
            return 1;
        }
    }
    
    if( num[0] = '-')
    {
        printf("NOT NATURAL");
    }
    else if ( num[0] = '0')
    {
        printf("NOT NATURAL");
    }
    else
    {
        printf("NATURAL");
    }
    
    

    
}