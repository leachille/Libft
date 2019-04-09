/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:30:12 by lachille          #+#    #+#             */
/*   Updated: 2019/04/09 06:25:51 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void ft_memdel(void **ap)
{
  int i;

  i = 0;
  while (ap[i])
  {
    free(ap[i]);
    ap[i] = NULL;
    i++;
  }
}

/*void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}*/
