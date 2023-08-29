#include<stdio.h>
#include<math.h>
int main(void)
{
    int m,n;
    printf("Enter the num of rows : ");
    scanf("%d" , &m);
    printf("Enter the num of column : ");
    scanf("%d" , &n);

    int matrix[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the value a%d%d : ", i+1,j+1);
            scanf("%d" , &matrix[i][j]);
        }
    }

    printf("The maitrix is : \n");

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}