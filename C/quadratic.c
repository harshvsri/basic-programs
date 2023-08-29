#include<stdio.h>
#include<math.h>
int main(void)
{
    printf("Standard Eqn : ax^2 + bx + c\n");

    double a, b, c;
    printf("Enter the value of a : ");
    scanf("%lf" , &a);
    printf("Enter the value of b : ");
    scanf("%lf" , &b);
    printf("Enter the value of c : ");
    scanf("%lf" , &c);

    double root1, root2;
    double d = pow(b,2)-4*a*c;

    root1 = (-b+pow(d,0.5))/2*a;
    root2 = (-b-pow(d,0.5))/2*a;

    printf("Roots are %lf %lf" , root1, root2);
}
