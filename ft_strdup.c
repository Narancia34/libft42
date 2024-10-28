/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:10:02 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:42:55 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *s1)
{
    char *str1;
    char *str2;
    int i;

    i = 0;
    str1 = (char *)s1;
    while(str1[i])
        i++;
    str2 = (char *)malloc(i);
    if (!str2)
        return(NULL);
    i = 0;
    while(str1[i])
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    return(str2);
}
#include <stdio.h>
int main ()
{
    const char *s = "steel ball";
    printf("%s", ft_strdup(s));
}