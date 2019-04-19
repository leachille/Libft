/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:01:05 by lachille          #+#    #+#             */
/*   Updated: 2019/04/18 16:36:58 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *first;
	t_list *list2;
	if (!lst || !*f)
		return (NULL);
	list2 = NULL;
	while (lst)
	{
		list2 = (*f)(lst);
		if (first)
		{
			first->next = list2;
			first = first->next;
		}
		else
		{
			first = list2;
		}
		lst = lst->next;
	}
	return (list2);
}
