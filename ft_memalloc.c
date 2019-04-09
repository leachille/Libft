/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:19:25 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 23:11:45 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tmp;
	int				i;

	i = 0;
	if (!(tmp = malloc(sizeof(tmp) * size)))
		return (NULL);
	while (tmp[i])
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
