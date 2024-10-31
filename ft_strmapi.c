/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:16:14 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 15:17:49 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    if(!s)
        return(0);
    
    i = 0;
    len = 0;
    while(s[len])
        len++;
    char *str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    while(str[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}