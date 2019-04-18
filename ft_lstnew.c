/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:46:08 by lachille          #+#    #+#             */
/*   Updated: 2019/04/18 16:34:04 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *dest;

	if (!(dest = malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		dest->content = NULL;
		dest->content_size = 0;
	}
	else
	{
		if (!(dest->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(dest->content, content, content_size);
		dest->content_size = content_size;
	}
	dest->next = NULL;
	return (dest);
}
