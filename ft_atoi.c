
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    char *a;
    int i;
    int res;
    int sign;
    i = 0;
    res = 0;
    a = (char*)str;
    sign = 1;

    if (a[0] == '-')
    {
        sign = -1;
        i++;
    }
    if (a[1] == '-' || a[1] == '+')
    {
        return 0;
    }
    while (a[i])
    {
        res = res*10 + str[i] - '0';
        i++;
    }
    return (res*sign);
}
int main(void)
{
    char str1[] = "-+1234";
    printf("%d\n", atoi(str1));
}