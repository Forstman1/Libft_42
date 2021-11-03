#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t i;
    char *a = (char*)dst;
    char *b = (char*)src;
    char c[n];
    i = 0;

    while (i < n)
    {
        c[i] = b[i];
        i++;
    }
    i = 0;
    while (a[i] == b[i])
    {
        i++;
        if (i > n)
            return (a);
    }
    i = 0;
    if (a < b)
        memcpy(a, b, n);
    else if (a > b)
    {
        while (i < n)
        {
            a[i] = c[i];
            i++;
        }
    }
    //dst = a;
    return (dst);
}
int main()
{
    //char str1[] = "haw are mr amine";
    char str1[] = "start hellosfsfs";
    printf("%s", ft_memmove(str1 + 8, str1 + 3, 8));
}