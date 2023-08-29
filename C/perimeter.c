// Perimeter of rectangle.
#include<stdio.h>
#include<cs50.h>
int main()
{
    string name;
    float a , b;
    printf("Lenght of rectangle  : ");
    scanf("%f" , &a);
    printf("Bredth of rectangle : ");
    scanf("%f" , &b);
    printf("Perimerter of rectangle is %f" , 2*(a + b));
    return 0;
}