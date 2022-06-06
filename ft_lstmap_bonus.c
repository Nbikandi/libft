/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:50:08 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/16 17:33:45 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;

	if (!lst && !*del && !*f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
