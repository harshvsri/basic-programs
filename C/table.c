#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number : ");
    scanf("%d" , &num);
    
    FILE *ptr;
    ptr = fopen("table.txt" , "w");
    for(int i=1; i<=10; i++)
    {
        int table = num*i;
        fprintf(ptr, "%d X %d = %d\n" , num, i, table);
    }
    fclose(ptr);
}
