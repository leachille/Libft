/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 22:47:22 by lachille          #+#    #+#             */
/*   Updated: 2019/04/27 23:06:38 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy_c(char *str, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = malloc(sizeof(*tmp) * (ft_strlen_c(str, c) + 1))))
		return (0);
	while (str[i] && str[i] != c)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
