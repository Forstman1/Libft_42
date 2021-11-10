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


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*static char *nullcase1(void)
{
	char	*b;
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;	
	
	b = (char *)malloc(1 * sizeof(char));
	b[0] = '\0';
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;
	size_t	o;
	size_t	l;

	i = 0;
	o = 0;
	b = NULL;
	a = (char *)s;
	l = 0;

	l = strlen(a);
	if (start > l)
	{
		b = (char *)malloc(sizeof(char));
		b[0] = '\0';
		return (b);
	}
	if (*s == 0)
	{
		a = (char *)s;
		return (nullcase1());
	}
	

	while (a[o] && o < len)
		o++;
	b = (char *)malloc(o * sizeof(char));
	if(!b)
	{
		b = NULL;
		return (b);
	}
	while (a[start] && i < len)
	{
		b[i] = a[start];
		i++;
		start++;
	}
	b[i] = '\0';
	return (b);
}

static char *nullcase2(void)
{
	char *c;

	c = (char *)malloc(sizeof(char));
	c[0] = '\0';
	return (c);
}

static int	depart(int i, char *b, char *a)
{
	int	o;

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

static char	*newarray(int i, int j, char *a)
{
	int		o;
	char	*c;

	o = 0;
	c = NULL;
	c = (char *)malloc((j - i + 2) * sizeof(char));
	while (i <= j)
	{
		c[o] = a[i];
		o++;
		i++;
	}
	c[o] = '\0';
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		o;
	int		j;
	char	*a;
	char	*b;

	i = 0;
	j = 0;
	a = (char *)s1;
	b = (char *)set;
	i = depart(i, b, a);
	j = strlen(a);
	
	while (j > 0)
	{
		o = 0;
		while (set[o])
		{
			if (set[o] == a[j])
				break ;
			o++;
		}
		if (set[o] != a[j])
			break ;
		j--;
	}
	if (i > j)
	{
		return(nullcase2());
	}
	return (newarray(i, j, a));
}*/

// int numdelim(char *a, char c)
//{
//    int o;
//    int i;
//
//    o = 0;
//    i = 0;
//    while (a[i])
//    {
//        if(a[i] == c)
//        {
//            o++;
//            if (a[i - 1] == c)
//                o--;
//        }
//        i++;
//    }
//    return o;
//}

static char **nullcase(char *a)
{
    int t;
    char **b;
    
    t = 0;
    b = (char**)malloc(sizeof(char*) * 1);
    if (a[0] != 0)
    {
        b[t] = strdup(a);
        //free(a);
    }
    else
    {
        b[0] = NULL; 
        return (b);
    }
    
    b[1] = NULL;
    //free(a);
    return b;
}

char **ft_split(const char *s, char c)
{
    int o;
    int i;
    int j;
    int t;
    int p;
    char *a;
    char **b;

    a = (char*)s;
    b = NULL;
    j = 0;
    i = 0;
    t = 0;
    o = 0;
    p = 0;
    if (c == 0)
        return (nullcase(a));
    a = ft_strtrim(s, &c);
    //o = numdelim(a, c);
    while (a[i])
    {
        if(a[i] == c && a[i + 1] != c)
            o++;
        i++;
    }
    i = 0;
    if (a[0] == 0)
    {
        b = (char**)malloc(sizeof(char*));
        b[0] = NULL;
        free(a);
        return b;
    }
    o++;
    b = (char**)malloc(sizeof(char*) * (o + 1));
    b[o - 1] = NULL;
    while (o > 0)
    {
        i = 0;
        while (a[p] != c && a[p])
        {
            i++;
            p++;
        }
        b[t] = ft_substr(a, j, i);
        while (a[p] == c)
            p++;
        j = p;
        t++;
        o--;
    }
    free(a);
    b[t] = NULL;
    return (b);
}