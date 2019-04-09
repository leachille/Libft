/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:46:00 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 23:23:07 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		result;
	size_t	i;
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	i = 0;
	while (tmp1[i] == tmp2[i] && i <= n)
	{
		if (tmp1[i] == '\0')
			return (0);
		i++;
	}
	result = tmp1[i] - tmp2[i];
	return (result);
}
