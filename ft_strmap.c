/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:25:41 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 18:17:47 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

char *ft_strmap(char const *s, char (*f)(char))
{
  int i;
  char *dest;

  i = 0;
  if(!(dest = malloc(sizeof(1 + ft_strlen(s)))))
    return (0);
  while (s[i])
  {
    dest[i] = f(s[i]);
    i++;
  }
  return (dest);
}
