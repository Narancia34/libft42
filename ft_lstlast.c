/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:00:37 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 16:48:16 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
t_list  *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while(lst->next != NULL)
        lst = lst->next;
    return (lst);
}