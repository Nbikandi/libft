/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:16:28 by nbikandi          #+#    #+#             */
/*   Updated: 2022/04/28 19:28:55 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	char	*s1_new;
	int		size;

	count = 0;
	size = ft_strlen(s1);
	s1_new = malloc(sizeof(char) * size + 1);
	if (!s1_new)
	{
		return (NULL);
	}
	while (s1[count])
	{
		s1_new[count] = s1[count];
		count++;
	}
	s1_new[count] = s1[count];
	return (s1_new);
}
