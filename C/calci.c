#include<stdio.h>
int main()
{
    float num1,num2;
    char op;
    printf("Enter first numbers : \n");
    scanf("%f" , &num1);
    printf("Enter an operator (+,-,*,/) : \n");
    scanf("%c" , &op);
    printf("Enter second numbers : \n");
    scanf("%f" , &num2);

    switch (op)
    {
    case '+' : "Sum is %d." , num1+num2;
    break;
    case '-' : "Sub is %d." , num1-num2;
    break;
    case '*' : "Mul is %d." , num1*num2;
    break;
    case '/' : "Div is %d." , num1/num2;
    break;
    default : "Invalid input.";
    }
    return 0;
}