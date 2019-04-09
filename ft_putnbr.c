/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 04:41:21 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 09:15:18 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void ft_putnbr(int n)
{

  if(n == -2147483648)
    ft_putstr("-2147483648")
  if (n < 0)
  {
    ft_putchar('-');
    n *= -1;
  }
  if (n > 9)
  {
    ft_putnbr(n / 10);
  }
  ft_putchar(n % 10 + '0');
}