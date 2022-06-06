/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:58:59 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/06 20:32:06 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strldup(const char *s1, size_t len)
{
	char	*str;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}

const char	*ft_next_word(const char *s, char c)
{
	while (!(*s == 0 || *s == c))
		s++;
	return (s);
}

size_t	ft_subsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && s[1] != c)
	{
		i++;
		s++;
	}
	return (i + 1);
}

size_t	ft_count_substr(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if ((s[1] == c || s[1] == '\0') && *s != c)
			count++;
		s++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;

	if (!s)
		return (NULL);
	str = malloc(ft_count_substr(s, c) * sizeof(char *));
	if (!str)
		return (NULL);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			str[count++] = ft_strldup(s, ft_subsize(s, c));
			s = ft_next_word(s, c);
			if (*s == 0)
				break ;
		}
		s++;
	}
	str[count] = 0;
	return (str);
}
