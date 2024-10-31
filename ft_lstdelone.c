/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:49:57 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:33:02 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL)
        return (NULL);
    del(lst->content);
    free(lst);
}