/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:56:18 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:46:43 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
		s++;
	s--;
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s--;
	}
	return 0;
}
#include <stdio.h>
int main()
{
	char *str = "testabcd";
	int ch = 'f';
	printf("%s", ft_strrchr(str, ch));
}
