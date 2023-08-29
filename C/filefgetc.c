#include<stdio.h>
int main(void)
{
    FILE *ptr;
    ptr = fopen("new.txt" , "r");
    
    char c = fgetc(ptr);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
}