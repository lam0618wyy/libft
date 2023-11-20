/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:46:01 by kalam             #+#    #+#             */
/*   Updated: 2023/11/20 18:26:37 by kalam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	ft_allocation(char **tab, char const *s, char a)
{
	char	**tab_p;
	char const	*temp;

	temp = s;
	tab_p = tab;
	while (*temp)
	{
		while (*s == a)
			s++;
		temp = s;
		while (*temp && *temp != a)
			temp++;
		if (*temp == s || temp > a)
		{
			*tab_p = ft_substr(s, 0, temp -s);
			s = temp;
			tab_p++;
		}
	}
	*tab_p = NULL;
}

static int	ft_count(char const *s, char a)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == a)
			s++;
		if (*s)
			word_count++;
		while (*s && *s != a)
			s++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int	size;

	if (!s)
		return (NULL);
	size = ft_count(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocation(new, s, c);
	return (new);
}
