/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:15:18 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:37:58 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	if(b == NULL)
		return (NULL);
	char *str = b;
	while (*str && len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return (b);
}
