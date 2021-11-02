#include "libft.h"
#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    char *c;
    int a;
    a = 0;
    c = s;

    while(a++ < n && *c)
    {
        *c = 0;
        c++;
    }
    s = c;

}
int main(void)
{
    char o[50] = "hello world";
	//printf("%s\n", bzero(o, 'p'));
	//ft_bzero(o, 3);
    bzero(o, 2);
    printf("%s", o);
}