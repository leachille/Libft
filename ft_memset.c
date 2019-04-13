/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 04:31:02 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/13 11:39:57 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *tab, int o, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)tab;
	while (n--)
	{
		*tmp = (unsigned char)o;
		tmp++;
	}
	return (tab);
}
