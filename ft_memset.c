/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 04:31:02 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 07:23:36 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void *ft_memset (void *tab, int o, size_t n)
{
  size_t i;
  char *tmp;

  tmp = (char *)tab;
  i = 0;
  while (tmp[i] != '\0' && i <= n)
  {
    tmp[i] = (char)o;
    i++;
  }
  return (tmp);
}
