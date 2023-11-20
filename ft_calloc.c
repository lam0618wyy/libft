/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:51:08 by kalam             #+#    #+#             */
/*   Updated: 2023/11/20 18:13:17 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t x, size_t y)
{
	void	*array;

	array = (void *)malloc(x * y);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (x * y));
	return (array);
}
