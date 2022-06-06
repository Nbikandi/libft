/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:04:39 by nbikandi          #+#    #+#             */
/*   Updated: 2022/04/21 18:47:57 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
	n--;
	s1++;
	s2++;
	}
	return (0);
}
