/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:46:00 by lachille          #+#    #+#             */
/*   Updated: 2019/04/19 07:04:29 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				result;
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	result = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	if ((s1 == NULL && s2 == NULL) || n == 0)
		return (0);
	while (tmp1[i] == tmp2[i] && i <= n)
	{
		i++;
		if (i == (unsigned int)n)
			return (0);
	}
	result = tmp1[i] - tmp2[i];
	return (result);
}
