/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:56:17 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/01 13:41:40 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_arr;
	char	*src_arr;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	dst_arr = (char *)dst;
	src_arr = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_arr[i] = src_arr[i];
		i++;
	}
	return (dst);
}
