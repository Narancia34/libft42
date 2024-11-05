/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:11:10 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/04 20:42:07 by mgamraou         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		slen;
	char	**strs;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (splitcount(s, c) + 1));
	if (!strs || !s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!ft_strchr(s, c))
			slen = ft_strlen(s);
		else
			slen = ft_strchr(s, c) - s;
		strs[i++] = ft_substr(s, 0, slen);
		if (!strs[i - 1])
			needfree(strs, i);
		s += slen;
	}
	strs[i] = NULL;
	return (strs);
}
int main ()
{
    char const *s = "test test test";
    int i = 0;
    char **strs = ft_split(s, ' ');
    while(strs[i])
    {
        printf("%s.\n", strs[i]);
        i++;
    }
}
