/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 22:48:38 by lachille          #+#    #+#             */
/*   Updated: 2019/04/27 23:04:49 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *s1, char *add)
{
	char *start;

	start = s1;
	while (s1)
		s1++;
	if (!(s1 = malloc(sizeof(s1) * (ft_strlen(add) + 1))))
		return (0);
	while (*add)
	{
		*s1 = *add;
		s1++;
		add++;
	}
	free(add);
	return (start);
}
