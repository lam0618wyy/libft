/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:44:30 by kalam             #+#    #+#             */
/*   Updated: 2023/11/20 19:06:43 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	size_t	index;
	char	*new_str;

	front = 0;
	while (s1[front] && ft_check(s1[front], set))
		front++;
	back = ft_strlen(s1);
	while (back > front && ft_check(s1[back - 1], set))
		back--;
	new_str = (char *)malloc(sizeof(*s1) * (back - front + 1));
	if (!new_str)
		return (NULL);
	index = 0;
	while (front < back)
		new_str[index++] = s1[front++];
	new_str[i] = 0;
	return (new_str);
}
