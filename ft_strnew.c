/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:59:10 by lachille          #+#    #+#             */
/*   Updated: 2019/04/25 00:10:58 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!(dst = malloc(sizeof(*dst) * size + 1)))
		return (0);
	while (i <= size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
