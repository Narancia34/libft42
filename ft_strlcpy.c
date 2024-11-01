/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:28:37 by mgamraou          #+#    #+#             */
/*   Updated: 2024/11/01 11:37:07 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char * dst, const char *src, size_t dstsize)
{
    if (!dst || !src)
        return (0);
    if (dstsize > 0)
        ft_memcpy(dst, src, dstsize);
    return (ft_strlen(src));
}
#include <string.h>
int main ()
{
    char dst[] = "elfarawinatachandra";
    const char *src = "nara";
    //printf("%zu\n", ft_strlcpy(dst, src, ft_strlen(dst)));
    printf("%zu\n", strlcpy(dst, src, ft_strlen(dst)));
    printf("%s", dst);
}   