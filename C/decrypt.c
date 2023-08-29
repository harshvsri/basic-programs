#include<stdio.h>

void decrypt(char *ptr);

int main(void)
{
    char text[] = "JMpwfZpv";
    decrypt(text);
    printf("Encrpted text is %s\n" , text);
}


void decrypt(char *ptr)
{
    int i=0;
    while(ptr[i] != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}