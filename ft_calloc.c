/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:51:08 by kalam             #+#    #+#             */
/*   Updated: 2023/11/22 18:43:24 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	if ((count > 0 && SIZE_MAX / count < size)
		|| (size > 0 && SIZE_MAX / size < count))
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size * count);
	return (tmp);
}
