#include<stdio.h>
int main(void)
{
    FILE *ptr;
    long long int num;
    long long int num2;
    ptr = fopen("sample.txt" , "r");
    if(ptr == NULL)
    {
        printf("FILE NOT FOUND :(");
    }
    else
    {
        fscanf(ptr, "%lld", &num);
        fscanf(ptr, "%lld", &num2);
        printf("Harsh : %lld\n" , num);
        printf("Nana : %lld\n" , num2);
        fclose(ptr);
    }
    
}