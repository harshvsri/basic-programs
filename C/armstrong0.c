//Cheak for three digit armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int num , ognum , rem , result=0;
    printf("Enter a three digit num : ");
    scanf("%d" , &num);

    ognum=num;
    while(ognum != 0)
    {
        //Remainder contains last diigit.
        rem = ognum % 10;
        result += rem * rem *rem;

        //Removing last digit from the original number.
        ognum /= 10; 
    }
    if( result == num)
    {
        printf("%d is an ARMSTRONG NUMBER." , num);
    }
    else
    {
        printf("%d is not an ARMSTRONG NUMBER." , num);
    }
    return 0;
}