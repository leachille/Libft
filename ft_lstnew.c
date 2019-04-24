/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:46:08 by lachille          #+#    #+#             */
/*   Updated: 2019/04/24 19:56:30 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *dest;

	dest = malloc(sizeof(dest));
	if (dest == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		content = NULL;
	}
	else
	{
		dest->content = malloc(sizeof(content));
		if (dest->content == NULL)
			return (NULL);
		ft_memcpy((dest->content), content, sizeof(content));
		dest->content_size = content_size;
	}
	dest->next = NULL;
	return (dest);
}
