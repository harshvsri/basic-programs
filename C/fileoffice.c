#include<stdio.h>
int main(void)
{
    struct employe
    {
        char name[10];
        int sallary;
    };

    struct employe e1;
    struct employe e2;
    
    printf("Enter the name of employe 1 : ");
    scanf("%s" , e1.name);
    printf("Enter the sallary of employe 1 : ");
    scanf("%d" , e1.sallary);
    
    printf("Enter the name of employe 2 : ");
    scanf("%s" , e2.name);
    printf("Enter the sallary of employe 2 : ");
    scanf("%d" , e2.sallary);

    FILE *ptr;
    ptr = fopen("office.txt" , "w");
    fprintf(ptr, "%s %d\n", e1.name, e1.sallary);
    fprintf(ptr, "%s %n\n", e2.name, e2.sallary);
    fclose(ptr);
}