/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:30:13 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:37:23 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	if(dst == NULL || src == NULL)
		return (NULL);

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while(len--)
			*d++ = *s++;
	return (dst);  
}
