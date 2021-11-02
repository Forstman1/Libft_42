
#include "lbft.h"

void *ft_memset(void *ptr, int i, size_t len)
{

    char *c;
    int a;
    a = 0;
    c =   ptr;

    
    
    while(a++ < len && *c)
    {
        *c = (unsigned char) i;
        c++;
    }
    c[a] = '\0';
    ptr = c;
    return ptr;
}