/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:56:27 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 20:40:56 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

char	*ft_tweaked_strdup(const char *src, char c)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	while (src[len] != c)
		len++;
	dup = (char*)malloc(sizeof(*dup) * len + 1);
	if (dup == 0)
		return (NULL);
	i = 0;
	while (src[i] != c)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int		is_new_word(const char *str, char c, int i)
{
	if (str[i] != c && str[i - 1] == c)
		return (1);
	else
		return (0);
}

int		ft_count_words(const char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_new_word(str, c, i))
			count++;
		i++;
	}
	return (count);
}

char	**filling_array(int *index, char **split, char c, const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_new_word(str, c, i))
		{
			split[*index] = ft_tweaked_strdup(str + i, c);
			index++;
		}
		i++;
	}
	return (split);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**split;
	int		index;
	int		i;

	if (str == NULL)
		return (NULL);
	index = 0;
	i = 0;
	if (!(split = (char**)malloc(sizeof(char*) * ft_count_words(str + 1, c))))
		return (0);
	filling_array(&index, split, c, str);
	if (!(split[index] = (char*)malloc(sizeof(char*) + 1)))
		return (0);
	split[index] = 0;
	while (i <= index)
	{
		free(split[i]);
		i++;
	}
	return (split);
}
