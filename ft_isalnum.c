/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:24:20 by kalam             #+#    #+#             */
/*   Updated: 2023/11/07 16:26:41 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int input)
{
	if ((input >= 'A' && input <= 'Z')
		|| (input >= 'a' && input <= 'z'))
		return (1);
	if (input >= '0' && input <= '9')
		return (1);
	return (0);
}
