#include<stdio.h>
int main(void)
{
    FILE *ptr;
    int num = 12;
    ptr = fopen("new.txt" , "w");
    fprintf(ptr, "DOB of Harsh is %d\n", num);
    fclose(ptr);
}