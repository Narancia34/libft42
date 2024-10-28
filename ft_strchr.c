/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:47:23 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:42:39 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return str;
		str++;
	}
	return 0;
}
int main()
{
	char *str = "testabcd";
	int ch = 102;
	printf("%s", ft_strchr(str, ch));
}
