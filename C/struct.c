#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[10];
    int rollNum;
    float cgpa;
}std;

/*struct employee
{
    char name[10];
    int idNum;
    float sallary;
};*/

int main(void)
{ 
    std s1;
    strcpy(s1.name,"Aman");
    s1.rollNum = 1;
    s1.cgpa = 10;

    printf("Name : %s\n", s1.name);
    printf("RollNum : %d\n", s1.rollNum);
    printf("CGPA : %f\n", s1.cgpa);

    /*struct employee e1;
    strcpy(e1.name,"Aman");
    e1.idNum = 23674;
    e1.sallary = 50000000;

    struct employee e2;
    strcpy(e2.name,"Gautam");
    e2.idNum = 23675;
    e2.sallary = 12000000;*/


    /*printf("%s\n" , e1.name);
    printf("%d\n" , e1.idNum);
    printf("%f\n" , e1.sallary);
    
    printf("\n");
    
    printf("%s\n" , e2.name);
    printf("%d\n" , e2.idNum);
    printf("%f\n" , e2.sallary);*/
}
