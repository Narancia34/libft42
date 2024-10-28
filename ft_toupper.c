/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:30:23 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/25 13:48:14 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}