/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 04:40:47 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 08:35:47 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void ft_putchar(char c);

void ft_putendl_fd(const char *s, int fd)
{
  while (s++)
    write(fd, s, 1);
  ft_putchar('\n');
}
