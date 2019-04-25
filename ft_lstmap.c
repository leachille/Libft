/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:01:05 by lachille          #+#    #+#             */
/*   Updated: 2019/04/25 00:09:12 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;
	t_list *newfirst;
	t_list *current;

	if (!lst || !*f)
		return (NULL);
	newfirst = NULL;
	while (lst)
	{
		newlst = (f)(lst);
		if (newfirst)
		{
			current->next = newlst;
			current = current->next;
		}
		else
		{
			newfirst = newlst;
			current = newfirst;
		}
		lst = lst->next;
	}
	return (newfirst);
}
