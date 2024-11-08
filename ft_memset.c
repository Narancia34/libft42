/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:15:18 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/08 10:30:00 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t i;

	str = b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
// int main()
// {
// 	int i = 237023;
// 	ft_memset(&i, 5, 1);
// 	ft_memset((char *)&i + 1, 57, 1);
// 	ft_memset((char *)&i + 2, 0, 2);
// 	printf("%d", i);
	
// }