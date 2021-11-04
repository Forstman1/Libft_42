
#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *a = (char*)dst;
    char *b = (char*)src;
    i = 0;

    while (i < n)
    {
        a[i] = b[i];
        i++;
    }
    dst = a;
    return (dst);
}
int main()
{
    char str[] = "start hello";

    printf("%s\n", str);
    ft_memcpy(str, &str[6], 4 * sizeof(char));
    printf("%s\n", str);
}