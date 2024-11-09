/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:22:51 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/09 17:08:06 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    s;
    size_t    d;
    size_t    di;
    size_t    si;

    si = ft_strlen(src);
    if (!dst && size == 0)
        return (si);
    d = ft_strlen(dst);
    di = d;
    if (size <= di)
        return (size + si);
    s = 0;
    while (src[s] && d + 1 < size)
    {
        dst[d] = src[s];
        s++;
        d++;
    }
    dst[d] = 0;
    return (di + si);
}
