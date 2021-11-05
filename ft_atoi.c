/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:51:33 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/05 08:51:36 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    }
    if (a[1] == '-' || a[1] == '+')
    {
        return 0;
    }
    i = 1;
    while (a[i])
    {
        res = res*10 + str[i] - '0';
        i++;
    }
    return (res*sign);
}
int main(void)
{
    char str1[] = "-1234";
    printf("%d\n", ft_atoi(str1));
}
