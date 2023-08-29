#include<stdio.h>

void printArray(int arr[], int size)
{
    printf("\nARRAY\n");
    for(int i=0; i<size; i++)
    {
        printf("%d " , arr[i]);
    }
}

int main(void)
{
    int oldArray[5] = {3,5,7,9,4};
    int size = sizeof(oldArray)/sizeof(int);
    printArray(oldArray, size);
    
    int newArray[5];
    
    for(int i=1; i<size; i++)
    {
        oldArray[i] += oldArray[i-1];
    }
    printArray(oldArray, size);


}