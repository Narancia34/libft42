/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:57:34 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/02 13:35:30 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list *node;

	if (!lst)
		return (0);
	i = 0;
	node = lst;
	while (node->next != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
