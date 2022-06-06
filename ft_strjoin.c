/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:26:26 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/05 17:12:59 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*len;

	i = 0;
	j = 0;
	len = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (len)
	{
		while (s1[i])
		{
			len[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			len[i + j] = s2[j];
			j++;
		}
		len[i + j] = 0;
		return (len);
	}
	return (0);
}
