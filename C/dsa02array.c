#include<stdio.h>

void display(int arr[], int length);
void insertElement(int arr[], int length, int index, int element);
void deleteElement(int arr[], int length, int index);
void linearSearch(int arr[], int length, int number);
void binarySearch(int arr[], int size, int element);

int main(void)
{
    int arr[10] ={10,20,30,40,50,60};

    insertElement(arr, 5, 4, 45);
    deleteElement(arr, 6, 2);
    linearSearch(arr, 5, 20);
    binarySearch(arr, 5, 50);
    
}

void display(int arr[], int length)
{
    for(int i=0; i<=length; i++)
    {
        printf("%d " , arr[i]);
    }
}

void insertElement(int arr[], int length, int index, int element)
{
    printf("BEFORE INSERTION\n");
    display(arr, length);

    for(int i=length; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;

    printf("\nAFTER INSERTION\n");
    display(arr, length+1);
}

void deleteElement(int arr[], int length, int index)
{
    printf("\n\nBEFORE DELETION\n");
    display(arr, length);

    
    for(int i=index; i<length; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("\nAFTER DELETION\n");
    display(arr, length-1);
}

void linearSearch(int arr[], int length, int number)
{
    int found=0;
    int index=0; 
    for(int i=0; i<=length; i++)
    {
        if(arr[i] == number)
        {
            found=1;
            break;
        }
        index++;
    }
    printf("\n\nLINEAR SEARCH RESULT\n");
    if(found == 1)
    {
        printf("%d FOUND at index %d.\n" , number, index);
    }
    else
    {
        printf("%d NOT FOUND");
    }
}

void binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size;
    int found = 0;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == element)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("\nBINARY SEARCH RESULT\n");
    if(found == 1)
    {
        printf("%d FOUND at index %d." ,element, mid);
    }
    else
    {
        printf("%d NOT FOUND." , element);
    }
}


