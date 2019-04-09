/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:38:51 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 23:42:37 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n && s2[i] != c)
		i++;
	if (i == n)
		return (0);
	return (&s2[i]);
}
