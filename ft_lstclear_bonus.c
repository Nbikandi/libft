/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:48:56 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/16 17:17:48 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!*lst)
		return ;
	if (del && lst)
	{
		while (*lst)
		{
			new = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = new;
		}
	}
	lst = NULL;
}
