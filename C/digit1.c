#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character : ");
    scanf("%c" ,&ch);

    if( ch>='0' && ch<='9')
    {
        printf("DIGIT");
    }
    else
    {
        printf("NOT DIGIT");
    }
}