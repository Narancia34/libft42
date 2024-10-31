/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:00:37 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:34:09 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
t_list  *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while(lst->next != NULL)
        lst = lst->next;
    retun (lst);
}