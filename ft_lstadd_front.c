/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:52:03 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:32:35 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return (NULL);
    new->next = (*lst);
    *lst = new;
}