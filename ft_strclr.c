/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:21:09 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 06:26:59 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void ft_strclr(char *s)
{
  int i;

  i = 0;
  while (s[i])
  {
    s[i] = '\0';
    i++;
  }
}
