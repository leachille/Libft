/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displayfile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:34:38 by anonymou          #+#    #+#             */
/*   Updated: 2019/04/24 22:02:17 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_displayfile(int ac, char **av)
{
	char	c;
	int		fd;

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return ;
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return ;
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &c, 1))
		ft_putchar(c);
	close(fd);
}
