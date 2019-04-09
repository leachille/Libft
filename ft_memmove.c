/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:23:57 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 07:19:29 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dst2;
	char *src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if(!(dst2 = (char *)malloc(sizeof(dst2) * len)))
		return (0);
	dst2 = (char *)ft_strncpy(dst2, src2, len);
	free(dst2);
	return (dst2);
}
