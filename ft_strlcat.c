/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:22:51 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/01 13:46:38 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;
	size_t	total_len;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	j = dlen;
	total_len = slen + dlen;
	if (destsize <= dlen)
		return (destsize + slen);
	while (src[i] && dlen + i < destsize - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (total_len);
}
