#include<stdio.h>
#include<stdlib.h>

struct array
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct array *a, int tsize, int usize)
{
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *)malloc(sizeof(int)*tsize);
}

void setValue(struct array *a)
{
    for(int i=0; i<a->used_size; i++)
    {
        printf("Element%d : " , i+1);
        scanf("%d" , &(a->ptr[i]));
    }
}

void getValue(struct array *a)
{
    for(int i=0; i<a->used_size; i++)
    {
        printf("%d " , a->ptr[i]);
    }
}


int main(void)
{
    struct array marks;
    createArray(&marks, 10, 5);
    setValue(&marks);
    getValue(&marks);
    
}
