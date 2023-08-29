#include<stdio.h>
int main(void)
{
    int nStudents = 3;
    int nSubjects = 5;

    int marks[3][5];
    for(int i=0; i<nStudents; i++)
    {
        for(int j=0; j<nSubjects; j++)
        {
            printf("Enter the marks of student %d in subject %d : ", i+1, j+1);
            scanf("%d" , &marks[i][j]);
        }
    }

    printf("### VERIFYING RESULT ###\n");

    /*for(int i=0; i<nStudents; i++)
    {
        for(int j=0; j<nSubjects; j++)
        {
            printf("Marks of student %d in subject %d is : %d\n", i+1, j+1, marks[i][j]);

        }
    }*/

    for(int i=0; i<nStudents; i++)
    {
        printf("Student %d : ", i+1);
        for(int j=0; j<nSubjects; j++)
        {
            printf("%d ",marks[i][j]);

        }
        printf("\n");
    }
}