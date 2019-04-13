/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 04:57:33 by lachille          #+#    #+#             */
/*   Updated: 2019/04/12 23:50:28 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (n <= dest_len)
		return (src_len + n);
	while ((dest[j] != '\0') && j < (n - 1))
		j++;
	while (src[i] && j < (n - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
