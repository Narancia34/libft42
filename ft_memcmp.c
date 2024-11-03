/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:36:00 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/03 16:39:22 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *str1;
	const char *str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while(*str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return ((int)(*str1 - *str2));
}
