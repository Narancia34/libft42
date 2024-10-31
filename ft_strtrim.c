/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:02:13 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 15:17:30 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int charinset(char c, char const *set)
{
    int i;
    
    i = 0;
    while(set[i])
    {
        if(c == set[i])
            return (1);
        i++;
    }
    return (0);
}
#include <stdlib.h>
char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char *str;
    if (s1 == NULL || set == NULL)
        return (NULL);
    
    start = 0;
    end = ft_strlen(s1);
    i = 0;
    while(s1[start] && charinset(s1[start], set) == 1)
        start++;
    while(end > start && charinset(s1[end - 1], set))
        end--;
    str = (char *)malloc(sizeof(*s1) * (end - start + 1));
    if (!str)
        return(0);
    while(start < end)
        str[i++] = s1[start++];
    str[i] = '\0';
    return(str);
}
/*#include <stdio.h>
int main()
{
    char const *s1 = "rrtktrhellorrtltrlt";
    char const *set = "tlr";
    printf("%s", ft_strtrim(s1, set));
}*/