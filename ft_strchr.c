/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:22:11 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 18:04:21 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

char	*ft_strchr(const char *s, int c)
{
	char *dst;

	dst = (char *)s;
	while (*dst != c)
	{
		if (*dst == '\0')
			return (NULL);
		dst++;
	}
	return (dst);
}
