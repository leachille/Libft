/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:32:04 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 06:28:12 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  int i;
  char *dest;

  i = 0;
  if(!(dest = malloc(sizeof(1 + ft_strlen(s)))))
    return (0);
  while (s[i])
  {
    dest[i] = f(i, s[i]);
    i++;
  }
  return (dest);
}
