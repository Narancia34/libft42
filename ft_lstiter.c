/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:12:11 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/02 13:28:46 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *lstptr;
	
	if(!lst)
		return;
	lstptr = lst;
	while (lstptr->next != NULL)
	{
		f(lstptr->content);
		lstptr = lstptr->next;
	}
}
