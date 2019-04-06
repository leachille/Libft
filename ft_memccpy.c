/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:08:59 by lachille          #+#    #+#             */
/*   Updated: 2019/04/06 10:22:00 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
  int i;
  int j;

  i = 0;
  while (n-- && src[i] != c)
  {
    dst[i] = src[i];
    i++;
  }
  return (dst);
}
