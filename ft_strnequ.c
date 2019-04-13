/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:39:46 by lachille          #+#    #+#             */
/*   Updated: 2019/04/13 08:57:33 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!(s1) || !(s2))
		return (0);
	if (!(*s1) && !(*s2))
		return (1);
	if (!n--)
		return (1);
	if (*s1 == *s2)
		return (ft_strnequ(s1 + 1, s2 + 1, n--));
	return (0);
}
