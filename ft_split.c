/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:11:10 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/28 13:30:53 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int isdelimiter(char c1, char c2)
{
    if(c1 == c2)
        return (1);
    return (0);
}
int splitcount(char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if(s[0] != c && s[0] != '\0')
        count++;
    while(s[i])
    {
        if(s[i - 1] == c && s[i] != c)
            count++;
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    int i;
    int count;
    char **strs;
    
    i = 0;
    count = splitcount(s, c);
    strs = (char **)malloc(sizeof(char *) * count);
    while(s[i])
    {
        if(isdelimiter(s[i], c) && !isdelimiter(s[i +1 ], c))
        {
            
        }
    }
}