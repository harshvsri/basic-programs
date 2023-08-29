//LINEAR SEARCH.
//Sesrching for a number one by one in a linear manner. 
#include<stdio.h>
#include<string.h>
int main(void)
{
    int num[10] = {1,4,3,7,2,0,8,6,9,5};
    char vowel[5] = {'a','e','i','o','u'};
    /*for(int i=0;i<7;i++)
    {
        if(num[i]==0)
        {
            printf("Found");
            return 0;
        }
    }*/
    char input; 
    printf("Enter a letter : ");
    scanf("%c" , &input);
    for(int i=0;i<5;i++)
    {
        if(vowel[i]==input)
        {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");
}






//BINARY SEARCH.
//Sorting the data in low to high.
//Breaking into two half and taking a apropriate half.