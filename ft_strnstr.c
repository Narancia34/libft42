/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:41:21 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/03 15:44:27 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return (char *)haystack;

    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
            {
                j++;
            }
            if (needle[j] == '\0')
                return (char *)&haystack[i];
        }
        i++;
    }
    return NULL;
}
