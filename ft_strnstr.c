/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:17:59 by lachille          #+#    #+#             */
/*   Updated: 2019/04/28 00:18:45 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j]
				&& (j + i) < len)
			j++;
		if (!(s2[j]))
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
