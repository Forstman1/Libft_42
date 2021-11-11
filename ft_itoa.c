/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:57:55 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/09 16:57:58 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{

    char    *a;
    long int      i;
    long int     res;
    long int     y;
    long int    store;
    long int    l;
    long int    o;

    y = 0;
    i = 0;
    res = n;
    store = 0;
    o = (long int)n;
	if (n == 0)
	{
		a = (char*)malloc(2 * sizeof(char));
        if (!a)
            return 0;
		a[0] = '0';
		a[1] = '\0';
		return a;
	}
	if (n > 0)
	{
    	while (n != '\0')
    	{
    	    n = n / 10;
    	    y++;
    	}
    	l = y;
    	a = (char*)malloc((y + 1) * sizeof(char));
        if (!a)
            return 0;
    	n = res;
    	while (y > 0)
    	{    
    	    store = res % 10;
    	      a[y - 1] = store + '0';    
    	      store = 0;    
    	      res = n / 10;
    	      n = res;
    	      i++;
    	    y--;
    	}
		a[l] = '\0';
    	return (a);
	}
	else
	{
		while (o != '\0')
    	{
    	    o = o / 10;
    	    y++;
    	}
    	l = y;
    	a = (char*)malloc((y + 2) * sizeof(char));
        if (!a)
            return 0;
		a[0] = '-';
		res = res * -1;
    	o = res;
    	while (y > 0)
    	{    
    	    store = res % 10;
    	      a[y] = store + '0';    
    	      store = 0;    
    	      res = o / 10;
    	      o = res;
    	      i++;
    	    y--;
    	}
		a[l + 1] = '\0';
    	return (a);
	}
}