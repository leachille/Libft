/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 04:45:00 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 06:26:21 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void ft_putnbr_fd(int n, int fd)
{
  int tmp;

  if (n < 0)
  {
    write(fd, '-', 1);
    n *= -1;
  }
  tmp = n;
  if (n > 9)
  {
    ft_putnbr(n / 10);
  }
  tmp = tmp % 10 + '0';
  write(fd, &tmp, 1);
}