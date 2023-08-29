#include<stdio.h>

void encrypt(char *ptr);

int main(void)
{
    char text[] = "ILoveYou";
    encrypt(text);
    printf("Encrpted text is %s\n" , text);
}


void encrypt(char *ptr)
{
    int i=0;
    while(ptr[i] != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}