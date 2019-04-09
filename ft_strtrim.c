/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:56:31 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 06:28:55 by lachille         ###   ########.fr       */
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

int dest_len(int *i, int *j)
{
  int l_dst;

  *i = 0;
  *j = 0;
  l_dst = ft_strlen(s);
  while (s[*i] = ' ' || s[*i] = ',' || s[*i] = '\n' || s[*i] = '\t')
    *i =+ 1;
  while (s[ft_strlen(s) - j] = ' ' || s[ft_strlen(s) - j] = ',' ||
   s[ft_strlen(s) - j] = '\n' || s[ft_strlen(s) - j] = '\t')
    *j =+ 1;
  return (l_dst = l_dst - (i + j));
}

char * ft_strtrim(char const *s)
{
  int i;
  int j;
  int a;
  char *dst;

  a = 0;
  if(!(dst = malloc(sizeof(*dst) * dest_len(int &i, int &j))))
    return (0);
  i = 0;
  while (s[i + j])
  {
    dst[a] = s[i];
    a++;
    i++;
  }
  return (dst);
}
