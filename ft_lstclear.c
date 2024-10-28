/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:57:55 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/28 10:09:32 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*lst) = tmp;
    }
}