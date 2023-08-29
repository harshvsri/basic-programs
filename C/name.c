#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20];
    printf("Enter your name : \n");
    scanf("%s" , name);
    /*
    fgets(name , 20 ,stdin);
    */
   //For having space included fget is used.
    printf("Your name is %s." , name);
    return 0;
}