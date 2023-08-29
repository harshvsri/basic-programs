#include<stdio.h>
#include<string.h>
int main(void)
{
    char alpha[10] = {'h','i','!','\0'};   //(\0) is null char.
    int i=0;
    while(alpha[i] != '\0')
    {
        i++;    
    }
    printf("%d" , i);
}