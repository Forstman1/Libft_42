/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:50:17 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/05 10:45:41 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int o;
    int k;
    char *a;
    char *b;
    char *c;

    i = 0;
    o = 0;
    k = 0;
    a = (char*)s1;
    b = (char*)set;

    while (a[i] == b)
        i++;
    while (a[o])
        o++;
    while (a[o - 1] == b)
        o--;
    c = (char*)malloc(((o - i) + 1) * sizeof(char));
    while (i < o)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    c[k] = '\0';
    return c;
}
int main()
{ 
    printf("%s", ft_strtrim(".  hello people  l.", ".l"));
    return 0;
}
