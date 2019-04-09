/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:36:43 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 22:25:41 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
