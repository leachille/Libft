/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 04:40:47 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/09 06:26:13 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

void ft_putendl_fd(char const *s, int fd)
{
  while (s++)
    write(fd, s, 1);
  write(fd, '/n', 1);
}
