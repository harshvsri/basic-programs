#include<stdio.h>
int main(void)
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("new.txt", "r");
    ptr2 = fopen("renew.txt", "w");
    
    char c = fgetc(ptr1);
    while(c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
}