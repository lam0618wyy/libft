/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:57:08 by kalam             #+#    #+#             */
/*   Updated: 2023/11/20 18:40:39 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	value;
	int	minus;
	int	i;

	if (!str)
		return (0);
	i = 0;
	while ((str[i] >= 9) && (str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == "-")
		minus = -1;
	else
		minus = 1;
	if (minus == -1 || str[i] == '+')
		i++;
	value = 0;
	while (str[i] >= '0' && str[i] <= '9')
		value = (value * 10) + (str[i++] - '0');
	return (value * minus);
}
