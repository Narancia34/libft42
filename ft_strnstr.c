/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:41:21 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/09 17:07:49 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t    i;
    size_t    j;

    i = 0;
    if (little[0] == '\0')
        return ((char *)(big + i));
    while (i < len && big[i] != '\0')
    {
        j = 0;
        if (big[i] == little[j])
        {
            while (little[j] && (i + j) < len && big[i + j] == little[j])
                j++;
            if (little[j] == '\0')
                return ((char *)(big + i));
        }
        i++;
    }
    return (NULL);
}
