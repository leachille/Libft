/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 03:16:30 by lachille          #+#    #+#             */
/*   Updated: 2019/04/25 03:16:32 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_size_digit(long long n)
{
	size_t i;

	i = 0;
	i = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}