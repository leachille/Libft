/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 23:28:57 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/07 23:36:26 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tweaked_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	while (src[len] != '\0' && src[len] != ' '
			&& src[len] != '\n' && src[len] != '\t')
		len++;
	dup = (char*)malloc(sizeof(*dup) * len + 1);
	if (dup == 0)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != '\n'
			&& src[i] != '\t' && src[i] != ' ')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int		is_new_word(char *str, char *c, int i)
{
	if ((str[i] != c)
		return (1);
	else
		return (0);
}

int		ft_count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_new_word(str, i))
			count++;
		i++;
	}
	return (count);
}


char ** ft_strsplit(char const *str, char c);
{
	char	**split;
	int		index;
	int		i;

	if (str == NULL)
		return (NULL);
	index = 0;
	i = 0;
	split = (char**)malloc(sizeof(char*) * ft_count_words(str) + 1);
	if (split == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		if (is_new_word(str, c, i))
		{
			split[index] = ft_tweaked_strdup(str + i);
			index++;
		}
		i++;
	}
	split[index] = (char*)malloc(sizeof(char*));
	split[index] = 0;
	return (split);
}
