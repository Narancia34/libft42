/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamraou <mgamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:48:45 by mgamraou          #+#    #+#             */
/*   Updated: 2024/10/29 13:53:47 by mgamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlst;
    t_list *head;
    
    if(!lst)
        return (NULL);
    if(!(head = ft_lstnew(f(lst->content))))
        return (NULL);
    lst = lst->next;
    while(lst->next != NULL)
    {
        newlst = ft_lstnew(f(lst->content));
        if(!newlst)
        {
            ft_lstclear(&head, del);
            return (NULL);
        }
        ft_lstadd_back(&head, newlst);
        lst = lst->next;
    }
    return (head);
}