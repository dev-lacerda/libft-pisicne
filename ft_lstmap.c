/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:48:08 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/30 18:40:45 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
    t_list  *ret;
    t_list  *tmp;
    
    ret = NULL;
    while (lst)
    {
        tmp = ft_lstnew(f(lst->content));
        if (!tmp)
        {
            ft_lstclear(&ret, del);
            return (NULL);
        }
        ft_lstadd_back(&ret, tmp);
        lst = lst->next;
    }
    return (ret);
    
}