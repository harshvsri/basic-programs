//VALGRIND is a tool to find memory related bugs in code.

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;  //x[3] : buffer overflow.

    free(x);
}