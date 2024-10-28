/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:16:14 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 10:27:17 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    int len = 0;
    while(s[len])
        len++;
    char *str = (char *)malloc(sizeof(char) * len + 1);
    while(str[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}