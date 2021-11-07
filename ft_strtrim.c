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
#include <string.h>

int depart(int i, char *b, char *a)
{
    int o;
    int k;
    
    o = 0;

    while (a[i])
    {
        o = 0;
        while (b[o])
        {
            if (b[o] == a[i])
                break ;
            o++;
        }
        if (b[o] != a[i])
            break ;
        i++;
    }
    return (i);
}

char *newarray(int i, int j, char *a)
{
    int o;
    char *c;
    
    o = 0;
    c = (char*)malloc((i + j + 1) * sizeof(char));
    
    while (i <= j)
    {
        c[o] = a[i];
        o++;
        i++;
    }
    c[o] = '\0';
    return (c);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int o;
    int j;
    char *a;
    char *b;

    i = 0;
    a = (char*)s1;
    b = (char*)set;

    i = depart(i, b, a);
    j = strlen(a);
    while (j-- > 0)
    {
        o = 0;
        while (set[o++])
            if (set[o] == a[j])
                break ;
        if (set[o] != a[j])
            break ;
    }
    return (newarray(i, j, a));
}
int    main(void)
{
    printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
    free(ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
    free(ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
    free(ft_strtrim("   xxxtripouille", " x"));
    printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
    printf("%s\n", ft_strtrim("", "123"));
    printf("%s\n", ft_strtrim("123", ""));
    printf("%s\n", ft_strtrim("", ""));
    printf("%s\n", ft_strtrim("abcdba", "acb"));
}