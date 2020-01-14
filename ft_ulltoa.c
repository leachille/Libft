/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 05:58:25 by lachille          #+#    #+#             */
/*   Updated: 2019/10/20 06:00:35 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_ulltoa_base(unsigned long long nb, int base)
{
	char				*res;
	unsigned long long	tmp;

	if (!(res = ft_strnew(0)))
		return (NULL);
	if (nb == 0)
		return (res = ft_straddc(res, '0'));
	while (nb)
	{
		tmp = nb % base;
		res = ft_straddc(res, ft_convert_base(tmp));
		nb = nb / base;
	}
	ft_strrev(res);
	return (res);
}

char    *ft_ulltoa_base(unsigned long long nb)
{
    return(ft_ulltoa_base(nb, 10));
}