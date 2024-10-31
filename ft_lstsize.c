/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:57:34 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:35:31 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int i;
    if (lst == NULL)
        return (NULL);

    i = 0;
    while(lst->next != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}