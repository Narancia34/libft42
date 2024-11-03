/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:12:11 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/03 14:27:34 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *lstptr;
	
	if(!lst || !f)
		return;
	lstptr = lst;
	while (lstptr != NULL)
	{
		f(lstptr->content);
		lstptr = lstptr->next;
	}
}
