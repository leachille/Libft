/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_after_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 22:49:11 by lachille          #+#    #+#             */
/*   Updated: 2019/04/28 00:32:40 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*init_after_c(char *str, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = malloc(sizeof(*tmp) * (ft_strlen(str) + 1))))
		return (0);
	while (str[i] != c && str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
