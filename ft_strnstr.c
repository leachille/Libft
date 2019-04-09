/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:17:59 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 06:28:36 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
