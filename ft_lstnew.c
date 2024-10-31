/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:35:54 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/31 11:35:15 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
t_list  *ft_lstnew(void *content)
{
    t_list *newnode;
    if (content == NULL)
        return (NULL);
    newnode  = (t_list *)malloc(sizeof(t_list));
    if (!newnode)
        return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}
int main()
{
    char *content = "test";
    printf("%s", ft_lstnew(content)->content);
}