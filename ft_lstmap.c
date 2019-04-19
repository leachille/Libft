/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:01:05 by lachille          #+#    #+#             */
/*   Updated: 2019/04/19 06:16:27 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *first;
	t_list *element;
	t_list *list2;

	if (!lst)
		return (NULL);
	first = NULL;
	while (lst)
	{
		list2 = (*f)(lst);
		if (!(first))
		{
			first = list2;
			element = first;
		}
		element->next = list2;
		element = element->next;
		lst = lst->next;
	}
	return (first);
}
