#include<stdio.h>
int main(void)
{
    
    int r1 , r2;
    int c1 , c2;
    
    printf("Enter the number of rows of Matrix1 : ");
    scanf("%d" , &r1);
    printf("Enter the number of columns of Matrix1 : ");
    scanf("%d" , &c1);
    
    int matrix1[r1][c1];
    printf("Enter the elements of Matrix1\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Value of a%d%d : " , i+1,j+1);
            scanf("%d" , &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows of Matrix2 : ");
    scanf("%d" , &r2);
    printf("Enter the number of columns of Matrix2 : ");
    scanf("%d" , &c2);

    if(c1 != r2)
    {
        printf("Matrix can't be multiplied\n");
    }
    else
    {
        int matrix2[r2][c2];
        printf("Enter the elements of Matrix2\n");
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("Value of a%d%d : " , i+1,j+1);
                scanf("%d" , &matrix2[i][j]);
            }
        }

        printf("Matrix1\n");
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                printf("%d " ,matrix1[i][j]);
            }
            printf("\n");
            
        }

        printf("Matrix2\n");
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("%d " ,matrix2[i][j]);
            }
            printf("\n");
            
        }

        int resultant[r1][c2];
        int sum = 0;

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                for(int k=0; k<r2; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                resultant[i][j] = sum;
                sum = 0;
            }
        }

        printf("Resultant Matrix\n");
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("%d " ,resultant[i][j]);
            }
            printf("\n");
            
        }
    }
}