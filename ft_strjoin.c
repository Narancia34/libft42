/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:22:58 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/28 18:07:49 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int total_len;
    char *str;
    int i = 0;
    int j = 0;

    total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char *)malloc(total_len * sizeof(char));
    if (!str)
        return(NULL);
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return(str);
}
int main()
{
    char const *s1 = "steel";
    char const *s2 = "ball";
    printf("%s", ft_strjoin(s1, s2));
}