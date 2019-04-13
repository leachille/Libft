/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:56:31 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/13 10:16:33 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',')
		i++;
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'
		|| s[len - 1] == ',') && len > i)
		len--;
	return (ft_strsub(s, i, (len - i)));
}
