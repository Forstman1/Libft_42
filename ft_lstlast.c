/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:16:53 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/12 18:16:55 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int count;

    count = 0;
    if (!lst)
        return 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return (lst);
}