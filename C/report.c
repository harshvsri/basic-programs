// Report Card
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter your number in A: \n");
    scanf("%f", &a);
    printf("Enter your number in B: \n");
    scanf("%f", &b);
    printf("Enter your number in C: \n");
    scanf("%f", &c);
    printf("Enter your number in D: \n");
    scanf("%f", &d);
    printf("Enter your number in E: \n");
    scanf("%f", &e);
    printf("Your total score is %f \n" , a+b+c+d+e);
    printf("Your percentage is %f \n" , (a+b+c+d+e)/5);
    float per = (a+b+c+d+e)/5;
    if(per >=90 && per<=100)
    {
        printf("Your grade is A \n");
    }
    else if(per >=80 && per <90)
    {
        printf("Your grade is B \n");
    }
    else if(per >=60 && per <80)
    {
        printf("Your grade is C \n");
    }
    else
    {
        printf("Your grade is D \n");
    }
    return 0;
}