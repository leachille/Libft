/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_after_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 22:49:54 by lachille          #+#    #+#             */
/*   Updated: 2019/04/28 01:10:32 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cpy_after_c(char *str, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = malloc(sizeof(*tmp) * (ft_strlen(str) + 1))))
		return (0);
	while (*str != c && *str)
		str++;
	while (str[i - 1])
	{
		tmp[i] = str[i];
		i++;
	}
	return (tmp);
}
