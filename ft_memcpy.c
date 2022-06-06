/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:55:42 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/12 19:36:39 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!(dest || src))
	{
		return (NULL);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
