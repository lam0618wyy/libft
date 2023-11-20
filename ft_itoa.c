/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:56:42 by kalam             #+#    #+#             */
/*   Updated: 2023/11/17 18:17:55 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_minus(int n)
{
	return ((n < 0) ? -n : n);
}

static void	ft_to_str(char *str)
{
	size_t	length;
	size_t	i;
	char	temp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - i -1];
		str[length - i -1] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int	length;
	int	neg_ve;

	neg_ve = (n < 0);
	if (!(str = ft_calloc(11 + neg_ve, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_is_minus(n % 10);
		n = n / 10;
	}
	if (neg_ve)
		str[length] = '-';
	ft_to_str(str);
	return (str);
}
