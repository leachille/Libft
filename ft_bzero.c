/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 04:53:17 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 06:51:14 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void bzero(void *s, size_t n)
{
  size_t i;
  unsigned char *tmp;

  i = 0;
  tmp = (unsigned char *)s;
  while (i < n)
  {
    tmp[i] = 0;
    i++;
  }
}
