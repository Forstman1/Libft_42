
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t n, size_t size)
{
    int *ptr;
    size_t i;

    i = 0;
    ptr = (int*)malloc(n*size);
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}
int main(void)
{
    int *newptr;
    //int *newptr = (int *)ft_calloc(5, 1);
    for (size_t i = 0; i < 5; i++)
    {
        printf("%x\n", newptr[i]);
    }    
    free(newptr);
}