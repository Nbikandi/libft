/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:36:06 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/05 18:57:59 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s_new;
	unsigned int	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	s_new = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_new)
		return (NULL);
	while (start >= ft_strlen(s))
	{
		*s_new = '\0';
		return (s_new);
	}
	ft_strlcpy(s_new, &s[start], len + 1);
	return (s_new);
}
