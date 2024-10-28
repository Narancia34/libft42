/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:41:21 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 16:08:26 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    char *h;
    
    i = 0;
    j = 0;
    size_t k = 0;
    h = (char *)haystack;
    while(haystack[i] && k < len)
    {
        while(h[i+j] == needle[j] && needle[j])
            {j++;
            k++;}
        if(needle[j] == '\0')
            return (&h[i]);
        j = 0;
        i++;
        k++;
    }
    return (0);
}
#include <string.h>
int main()
{
    const char *haystack = "hellooooo!!!";
    const char *needle = "ll";
    printf("%s____", ft_strnstr(haystack, needle, 3));
    printf("%s", strnstr(haystack, needle, 8));
}