/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:17:59 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 20:49:45 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str2;

	str2 = (char *)str;
	i = 0;
	j = 0;
	while (str2[i] != '\0')
	{
		while (str2[i + j] == to_find[j] && j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return (&str2[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
