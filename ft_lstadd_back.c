/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:32:19 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 16:47:23 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    /*if (lst == NULL || new == NULL)
        return (NULL);*/
    while((*lst)->next != NULL)
        (*lst) = (*lst)->next;
    (*lst)->next = new;
}