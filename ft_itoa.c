/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:24:50 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/04 11:54:09 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		i;
	char	*result;

	num = n;
	len = count_digit(num);
	i = 0;
	result = (char *)malloc(((len + 1) * sizeof(char)));
	if (!result)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
		i = 1;
	}
	result[len] = '\0';
	len--;
	while (i <= len)
	{
		result[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
