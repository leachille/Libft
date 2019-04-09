/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 04:32:56 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 23:45:54 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*alloc_ar(int n)
{
	char	*dst;
	int		i;

	i = 0;
	if (n < 0)
		i += 1;
	while (n > 9)
	{
		n = n / 10;
		i += 1;
	}
	if (!(dst = malloc(sizeof(*dst) * i + 50)))
		return (0);
	dst[i + 1] = '\0';
	return (dst);
}

static	int		ft_len(int n, int i)
{
	if (n < 0)
	{
		i += 1;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i += 1;
	}
	return (i);
}

static	char	*recursive(int i, int n, char *dst, int len)
{
	int		nb;

	if (n < 0)
	{
		if (!(dst = alloc_ar(n)))
			return (NULL);
		dst[0] = '-';
		n *= -1;
		len = -42;
	}
	if (i == len)
		if (!(dst = alloc_ar(n)))
			return (NULL);
	if (n < 10)
	{
		dst[i] = n + 48;
		return (dst);
	}
	nb = n % 10 + 48;
	dst[i] = nb;
	return (recursive(i - 1, n / 10, dst, len));
}

char			*ft_itoa(int n)
{
	int		i;
	char	*dst;
	int		len;

	i = 0;
	dst = NULL;
	len = ft_len(n, i);
	i = len;
	return (recursive(i, n, dst, len));
}
