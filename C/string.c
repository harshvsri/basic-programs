#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[20];
    char boy[5] = "Yash";

    printf("Enter your name : ");
    gets(name);

    puts(name);


    //printf("Enter your name : ");
    //scanf("%s" , name);
    //printf("Your name is %s.\n" , name);

    /*for(int i=0; i<5; i++)
    {
        printf("%c" , boy[i]);
    }

    char *ptr = boy;
    while(*ptr != '\0')
    {
        printf("%c" , *ptr);
        ptr++;
    }*/




    //printf("Your name is %s.\n" , boy);
    /*int lenght = strlen(name);
    for(int i=0 ; i<lenght ; i++)
    {
        printf("%c" , name[i]);
        printf("\n");
    }*/
}
