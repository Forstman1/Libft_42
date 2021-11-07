/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:39:10 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 10:40:53 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	int		a;

	a = 0;
	c = s;
	while (a++ < n && *c)
	{
		*c = 0;
		c++;
	}
	s = c;
}
int main()
{     
    int i = 0;     
    char str1[12] = "Hello World!";     
    char str2[12] = "Hello World!";     
    bzero(str1, 1);     
    ft_bzero(str2, 1);     
    while (i < 12)     
    {          
        printf("%c\t\t%c\n", str1[i], str2[i]);         
        i++;       
    }     
    return 0; 
}
