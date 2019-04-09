/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:56:31 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 20:44:12 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		dest_len(size_t *i, size_t *j, const char *s)
{
	size_t	l_dst;

	*i = 0;
	*j = 0;
	l_dst = ft_strlen(s);
	while (s[*i] == ' ' || s[*i] == ',' || s[*i] == '\n' || s[*i] == '\t')
		*i += 1;
	while (s[ft_strlen(s) - *j] == ' ' || s[ft_strlen(s) - *j] == ',' ||
		s[ft_strlen(s) - *j] == '\n' || s[ft_strlen(s) - *j] == '\t')
		*j += 1;
	return (l_dst = l_dst - (*i + *j));
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	int		a;
	char	*dst;

	a = 0;
	if (!(dst = malloc(sizeof(*dst) * dest_len(&i, &j, s))))
		return (0);
	i = 0;
	while (s[i + j])
	{
		dst[a] = s[i];
		a++;
		i++;
	}
	return (dst);
}
