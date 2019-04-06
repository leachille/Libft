/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:19:25 by lachille          #+#    #+#             */
/*   Updated: 2019/04/06 11:28:13 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memalloc(size_t size)
{
  void *tmp;
  int i;

  i = 0;
  if(!(tmp = malloc(sizeof(tmp) * size)))
    return (NULL);
  while (tmp[i])
    {
      tmp[i] = 0;
      i++;
    }
  return (size);
}
