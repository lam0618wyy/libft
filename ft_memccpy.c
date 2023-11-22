/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:50:36 by kalam             #+#    #+#             */
/*   Updated: 2023/11/21 19:55:33 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*srcc;
	unsigned char	*dstc;

	count = 0;
	srcc = (unsigned char *)src;
	dstc = (unsigned char *)dst;
	if (n)
	{
		while (count < n)
		{
			dstc[count] = srcc[count];
			if (srcc[count] == (unsigned char)c)
				return (&dstc[count + 1]);
			count++;
		}
	}
	return (NULL);
}
