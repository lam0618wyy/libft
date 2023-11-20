/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:20:18 by kalam             #+#    #+#             */
/*   Updated: 2023/11/09 18:25:29 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest[i] == '\0') && (src[i] == '\0')
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d = (n - 1) + d;
		s = (n - 1) + s;
	}
	while (i < n)
	{
		*d = *s;
		d = d + j;
		s = s + j;
		i++;
	}
	return (dest);
}
