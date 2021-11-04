
#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *a;
    char *b;
    char *c;
    int i;

    i = 0;
    a = (char*)s1;
    b = (char*)s2;

    c = (char*)malloc(strlen(a) + strlen(b) * 1)
    strcpy(c, a);
    strcat(c, b);
    return (c);
}
int main(void)
{
    char a[] = "hello";
    char b[] = "people";
    printf("%s", ft_strjoin(a, b));
}