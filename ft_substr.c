/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:51:12 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/05 08:51:15 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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

    while (a[start] && o < len)
    {
        o++;
    }
    b = (char*)malloc((o + 1) * sizeof(char));
    while (a[i] && i <= len)
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    return b;
}
