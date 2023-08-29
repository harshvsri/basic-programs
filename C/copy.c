#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char str1[20];
    printf("Enter str1 : ");
    scanf("%s" , str1);
    char str2[20];
    strcpy(str2,str1);

    str1[0] = toupper(str1[0]);

    printf("str1 : %s\n" , str1);
    printf("str2 : %s\n" , str2);
}