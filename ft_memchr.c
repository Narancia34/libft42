/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:41:59 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:39:46 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *str;

	str = s;
	while (*str != '\0' && n-- > 0)
	{
		if (*str == c)
			return ((void *)str);
		str++;
	}
	return NULL;
}
int main()
{
	char *str = "testabcd";
	int ch = 'e';
	printf("%s", ft_memchr(str, ch, 3));
}
