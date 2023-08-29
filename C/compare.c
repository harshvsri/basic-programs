#include<stdio.h>
#include<string.h>
int main(void)
{
    /*int i;
    printf("Enter value of i : ");
    scanf("%d" , &i);
    int j;
    printf("Enter value of j : ");
    scanf("%d" , &j);*/

    char str1[20];
    printf("Enter str1 : ");
    scanf("%s" , str1);
    char str2[20];
    printf("Enter str2 : ");
    scanf("%s" , str2);

    /*if(strcmp(str1,str2) == 0) //Even they are same it shows different.
    {
        printf("Same\n");
    }
    else
    {
        printf("Differnt\n");
    }*/

    printf("%p\n" , str1);
    printf("%p\n" , str2);
}