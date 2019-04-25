/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:56:27 by lachille          #+#    #+#             */
/*   Updated: 2019/04/25 18:38:38 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	int		words;
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	words = ft_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		if (!(tab[i] = (char *)malloc(sizeof(char) * j)))
			return (NULL);
		ft_strncpy(tab[i++], s, j);
		s += j;
	}
	tab[i] = 0;
	return (tab);
}
