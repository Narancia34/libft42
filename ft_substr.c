/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:01:26 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/28 18:45:22 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    sub = malloc(len * sizeof(char));
    if (!sub)
        return(NULL);
    size_t i = 0;
    while (i < len)
    {
        sub[i] = s[start];
        i++;
        start++;
    }
    return sub;
}
/*int main ()
{
    unsigned int start = 4;
    size_t len = 4;
    char const *s = "hellooo!!";
    printf("%s", ft_substr(s, start, len));
}*/