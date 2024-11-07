/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:11:10 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/07 17:16:46 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	splitcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] != c && s[0] != '\0')
		count++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	needfree(char **strs, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		free(strs[j]);
		j++;
	}
	free(strs);
	return (0);
}

static int	checkdel(const char **s, char c)
{
	while (**s == c && *s)
		(*s)++;
	if (**s == '\0')
		return (0);
	return (1);
}

static int	countlen(const char *s, char c)
{
	int	len;

	if (!ft_strchr(s, c))
		len = ft_strlen(s);
	else
		len = ft_strchr(s, c) - s;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		slen;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	strs = (char **)malloc(sizeof(char *) * (splitcount(s, c) + 1));
	if (!strs)
		return (0);
	while (*s)
	{
		if (checkdel(&s, c) == 0)
			break ;
		slen = countlen(s, c);
		strs[i++] = ft_substr(s, 0, slen);
		if (!strs[i - 1])
		{
			needfree(strs, i);
			return (NULL);
		}
		s += slen;
	}
	strs[i] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	char const	*s;
// 	int			i;
// 	char		**strs;

// 	i = 0;
// 	s = "test test test  ";
// 	strs = ft_split(s, 'r');
// 	while (strs[i])
// 	{
// 		printf("%s.\n", strs[i]);
// 		i++;
// 	}
// }
