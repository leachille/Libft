/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:10:03 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 20:45:28 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*dst;

	dst = (char *)s1;
	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		while (dst[i + j] == s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return (&dst[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
