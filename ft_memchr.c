/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:41:59 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/01 13:52:39 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	if (s == NULL)
		return (NULL);
	str = s;
	while (*str != '\0' && n-- > 0)
	{
		if (*str == c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
