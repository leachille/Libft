/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:06:46 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 18:25:37 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				result;
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i <= n)
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
