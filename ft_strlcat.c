/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:02:51 by nbikandi          #+#    #+#             */
/*   Updated: 2022/04/27 17:46:34 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	origin;
	size_t	i;

	dest = ft_strlen(dst);
	origin = ft_strlen(src);
	i = 0;
	if (dstsize < dest)
	{
		return (origin + dstsize);
	}
	if (dstsize > dest)
	{
		while ((i < (dstsize - dest - 1)) && (src[i] != '\0'))
		{
			dst[dest + i] = src[i];
			i++;
		}
	}
	dst[dest + i] = '\0';
	return (dest + origin);
}
