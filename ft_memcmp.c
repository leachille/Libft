/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:46:00 by lachille          #+#    #+#             */
/*   Updated: 2019/04/06 10:54:22 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t n)
{
  int				result;
	unsigned int	i;

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
