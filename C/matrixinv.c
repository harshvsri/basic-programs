#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    printf("Enter the num of rows/column : ");
    scanf("%d" , &n);

    int matrix[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the value a%d%d : ", i+1,j+1);
            scanf("%d" , &matrix[i][j]);
        }
    }

    printf("The maitrix is : \n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    float a, b, c, d;
    a = matrix[0][0];
    b = matrix[0][1];
    c = matrix[1][0];
    d = matrix[1][1];
    float det = (a*d)-(b*c);

    printf("Det : %f\n" , det);
}