#include<stdio.h>
struct people
{
    char name;
    int rank;
};

int main(void)
{
    struct people p1,p2;

    p1.name = 'M';
    p1.rank = 1;

    p2.name = 'H';
    p2.rank = 2;

    printf("%c , %d \n" , p1.name , p1.rank);
    printf("%c , %d" , p2.name , p2.rank);
}