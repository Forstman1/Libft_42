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


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c)
{
    int i;
    size_t o;
    int t;
    int k;
    int j;
    char *a;
    char **b;

    a = (char*)s;
    i = 0;
    o = 0;
    t = 0;
    j = 0;
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
    while ((o + 1) > 0)
    {
        k = 0;
        while (a[i] == c)
            i++;
        while (a[i] != c)
            i++;
        b[t] = malloc(sizeof(char) * (i + 1));
        while (a[i] == c)
            i++;
        while (a[j] && a[j] != c)
        {
            b[t][k] = a[j];
            k++;
            j++;
        }
        b[t][k] = '\0';
        while (a[j] == c)
            j++;
        t++;
        o--;
    }
    return b;
}
int main(void)
{
    char **str = ft_split("hello,people,chill,kill,stickkk,non", ',');

    printf("%s", str[5]);
    free(str);

}