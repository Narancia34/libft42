/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:30:13 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/08 10:29:54 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	
	if (!dst || !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	else
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	return (dst);
}
// #include <string.h>
// int main() {
//     ft_memmove(NULL, NULL, 5);

//     return 0;
// }