/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:23:57 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 08:32:49 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

char *ft_strncpy(char *dest, const char *src, size_t n);

void	*ft_memmove(const void *dst, const void *src, size_t len)
{
	char *dst2;
	char *src2;
	unsigned int i;

	i = (unsigned int)len;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if(!(dst2 = (char *)malloc(sizeof(dst2) * len)))
		return (0);
	dst2 = ft_strncpy(dst2, src2, i);
	free(dst2);
	return (dst2);
}
