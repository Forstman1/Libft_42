/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:45:24 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/05 10:45:26 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// char **ft_split(char const *s, char c)
// {
//     int i;
//     int o;
//     int p;
//     int t;
//     int k;
//     char *a;
//     char **b;

//     a = (char*)s;
//     i = 0;
//     o = 0;
//     p = 0;
//     t = 0;
//     k = 0;

//     while (a[i])
//     {
//         if (a[i] = *c)
//         {
//             o++;
//         }
//         i++;
//     }
//     b = malloc(sizeof(char*) * (o + 1))
//     i = 0;
//     while (b[t])
//     {
//         while (a[i] == *c)
//             i++;
//         while (a[i] != *c)
//             i++;
//         b[t] = malloc(size(sizeof(char) * (i + 1))
//        while (b[t][k])
//        {
//            b[t][k] = a[i];
//            k++;
//        }
//        t++;
//     }
//     return b;
// }

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    int i;
    size_t o;
    int p;
    int t;
    int k;
    int j;
    char *a;
    char **b;

    a = (char*)s;
    i = 0;
    o = 0;
    p = 0;
    t = 0;
    k = 0;

    while (a[i])
    {
        if (a[i] == c)
        {
            o++;
        }
        i++;
    }
    b = malloc(sizeof(char*) * (o + 1));
    i = 0;
    while (o > 0)
    {
        j = 0;
        k = 0;
        while (a[i] != c)
            i++;
        b[t] = (char*)malloc(sizeof(char) * (i + 1));
        while (a[i] == c)
            i++;
        while (b[t][k])
        {
            b[t][k] = a[j];
            k++;
            j++;
        }
        t++;
    }
    return b;
}
int main(void)
{
    char **str = ft_split("hello, people, chill", ',');
    int i;
    
    i = 0;
    printf("%s", *str);
    free(str);
}