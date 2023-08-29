#include<stdio.h>

int strlen(char *ptr);

int main(void)
{
    char name[] = "Aman";
    printf("Length of name is : %d" , strlen(name));
}

int strlen(char *name)
{
    char *ptr = name;
    int length=0;
    int i=0;
    while(ptr[i] != '\0')
    {
        ptr++;
        length++;
    }
    return length;
}