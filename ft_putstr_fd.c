/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:06:55 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:41:51 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while (s[i])
    {
        write(fd, s[i], 1);
        i++;
    }
}