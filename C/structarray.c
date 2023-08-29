#include<stdio.h>
#include<string.h>

struct account
{
    char fbid[20];
    int age;
    int friends;
};

int main(void)
{
    struct account facebook[100];
    strcpy(facebook[0].fbid , "Angel_Priya");
    facebook[0].age = 18;
    facebook[0].friends = 563;

    /*struct account e1;
    struct account *ptr;
    ptr = &e1;
    (*ptr).age = 23;*/

}