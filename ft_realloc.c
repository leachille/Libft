/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 22:48:38 by lachille          #+#    #+#             */
/*   Updated: 2019/04/28 00:25:25 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *s1, char *add)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tmp = malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(add) + 1))))
		return (0);
while (add[j])
{
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i + j] = add[j];
	j++;
}
tmp[i + j] = '\0';
	return (tmp);
}
