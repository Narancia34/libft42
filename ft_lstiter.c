/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:12:11 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:33:59 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL)
        return (NULL);
    while(lst->next != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}