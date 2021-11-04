
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char *b;
    char *c;
    int i;

    i = 0;
    b = (char*)s1;
    while (s1[i])
    {
        i++;
    }

    c = (char*)malloc(i*sizeof(char));
    i = 0;
    while (b[i])
    {
        c[i] = b[i];
        i++;
    }
    return (c);
}