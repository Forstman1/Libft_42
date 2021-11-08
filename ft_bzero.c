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
	size_t	i;

	i = 0;
	c = s;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
	s = c;
}
//int main()
//{     
//    int i = 0;     
//    char str1[100] = "\0ello World!";     
//    char str2[100] = "\0ello World!";     
//    bzero(str1, 42);     
//    ft_bzero(str2, 42);     
//    while (i < 12)     
//    {          
//        printf("%x\t\t%x\n", str1[i], str2[i]);         
//        i++;       
//    }     
//    return 0; 
//}
