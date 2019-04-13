/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:17:59 by lachille          #+#    #+#             */
/*   Updated: 2019/04/13 07:01:47 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len2;

	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (*s1 && len-- >= len2)
	{
		if (*s1 == *s2 && !(ft_memcmp(s1, s2, len2)))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
