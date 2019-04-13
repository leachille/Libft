/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:06:46 by lachille          #+#    #+#             */
/*   Updated: 2019/04/13 08:39:22 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n-- && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (!n)
		return ((unsigned char)*--s1 - (unsigned char)*--s2);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
