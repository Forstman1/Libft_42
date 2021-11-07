/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:22:09 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 12:12:34 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	o;
	size_t	i;
	size_t	l;
	char	*a;

	a = (char *)src;
	i = 0;
	o = 0;
	len = strlen(dst);
	o = strlen(a);
	l = len;
	if (len > n)
		return (n + o);
	while (a[i] != 0 && len < (n - 1))
	{
		dst[len] = a[i];
		i++;
		len++;
	}
	dst[len] = '\0';
//	return (l + o);
//}
//int main(void)
//{
//    char dest1[30];
//    char src1[10]= "AAAAAAAAA";
//    dest1[0] = 'B';
//    printf("\n00.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 0));
//    printf("01.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 1));
//    printf("02.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 3));
//    printf("03.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 6));
//    //printf("04.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, -1));
//    printf("05.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 17));
//    printf("06.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 1));
//    printf("07.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 5));
//    printf("08.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, src1, 5));
//    printf("09.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "", 15));
//    //printf("10.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "", 42));
//    printf("11.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "", 0));
//    printf("12.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "123", 1));
//    printf("13.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "123", 2));
//    printf("14.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "123", 3));
//    printf("15.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "123", 4));
//    printf("16.\tft_strlcat:\t%zu\n", ft_strlcat(dest1, "123", 0));
//
//    char dest2[30];
//    char src2[10]= "AAAAAAAAA";
//    dest2[0] = 'B';
//    printf("\n00.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 0));
//    printf("01.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 1));
//    printf("02.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 3));
//    printf("03.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 6));
//    //printf("04.\tstrlcat:\t%zu\n", strlcat(dest2, src2, -1));
//    printf("05.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 17));
//    printf("06.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 1));
//    printf("07.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 5));
//    printf("08.\tstrlcat:\t%zu\n", strlcat(dest2, src2, 5));
//    printf("09.\tstrlcat:\t%zu\n", strlcat(dest2, "", 15));
//    //printf("10.\tstrlcat:\t%zu\n", strlcat(dest2, "", 42));
//    printf("11.\tstrlcat:\t%zu\n", strlcat(dest2, "", 0));
//    printf("12.\tstrlcat:\t%zu\n", strlcat(dest2, "123", 1));
//    printf("13.\tstrlcat:\t%zu\n", strlcat(dest2, "123", 2));
//    printf("14.\tstrlcat:\t%zu\n", strlcat(dest2, "123", 3));
//    printf("15.\tstrlcat:\t%zu\n", strlcat(dest2, "123", 4));
//    printf("16.\tstrlcat:\t%zu\n", strlcat(dest2, "123", 0));
//    return (0);
//}