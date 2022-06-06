/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:42:40 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/14 13:45:28 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	if (!lst)
		return (NULL);
	end = lst;
	while (end->next != NULL)
	{
		end = end->next;
	}
	return (end);
}
