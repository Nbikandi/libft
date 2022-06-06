/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:13:16 by nbikandi          #+#    #+#             */
/*   Updated: 2022/05/14 11:54:48 by nbikandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n_length)
{
	int	length;

	length = 1;
	while (n_length / 10 != 0)
	{
		length++;
		n_length = n_length / 10;
	}
	if (n_length < 0)
		length = length + 1;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		i;
	int		str_length;
	long	nb;

	nb = n;
	str_length = ft_length(nb);
	str_num = (char *)malloc(sizeof (char) * (str_length + 1));
	if (!str_num)
		return (NULL);
	str_num[str_length] = '\0';
	i = 0;
	if (nb < 0)
	{
		str_num[i] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		str_num[0] = '0';
	while (nb > 0)
	{
		str_num[str_length - i++ - 1] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str_num);
}
