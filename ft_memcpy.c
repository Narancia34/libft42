/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:56:17 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 14:47:49 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == NULL || src == NULL)
		return NULL;
	char	*dst_arr;
    char	*src_arr;
	size_t	i;

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
