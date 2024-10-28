/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:41:56 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:38:45 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
    char *ptr;
    size_t i;
    
    i = 0;
    ptr = (char *)malloc(count * size);
    if (!ptr)
        return(NULL);
    while (i < count * size)
        ptr[i++] = '0';
    return(ptr);
}
int main()
{
    size_t count = 9;
    printf("%s", ft_calloc(count , 4));
}