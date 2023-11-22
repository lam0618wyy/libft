/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:28:51 by kalam             #+#    #+#             */
/*   Updated: 2023/11/21 19:18:50 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while ((*ptr1 == *ptr2) && (n - 1 > 0))
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return ((int)(*ptr1 - *ptr2));
}
