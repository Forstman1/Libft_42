

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *a;
    char *b;
    size_t i;
    size_t o;

    i = 0;
    o = 0;

    a = (char*)&s[start];
    while (a[o] && o < len)
    {
        o++;
    }

    b = (char*)malloc(o * sizeof(char));
    while (a[i] && i <= len)
    {
        b[i] = a[i];
        i++;
    }
    return (b);
}