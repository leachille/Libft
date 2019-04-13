/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:10:03 by lachille          #+#    #+#             */
/*   Updated: 2019/04/13 07:01:38 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j])
		{
			j++;
			if (j == ft_strlen(s2))
				return ((char *)s1 + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
