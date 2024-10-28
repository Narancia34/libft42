/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:30:13 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/27 16:04:01 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;
    
    d = (char *)dst;
    s = (char *)src;
    if (d > s)
    {
        //d += len -1;
        //s += len -1;
        while (len-- > 0)
            d[len] = s[len];
    }
    else
        while(len--)
            *d++ = *s++;
    return (dst);  
}
#include <stdio.h>
int main ()
{
    char dst[] = "steel ball run";
    //const char *src = "Spin";
    printf("%s\n", memmove(dst, dst + 1, 10));
    char d[] = "steel ball run";
    printf("%s", ft_memmove(d, d + 1, 10));
    
}