/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:12:08 by mtopor            #+#    #+#             */
/*   Updated: 2017/12/03 20:20:04 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rezultat;
	t_list	*aux;
	t_list	*aux2;

	if (!lst || !f)
		return (NULL);
	aux2 = f(lst);
	if ((rezultat = ft_lstnew(aux2->content, aux2->content_size)))
	{
		aux = rezultat;
		lst = lst->next;
		while (lst)
		{
			aux2 = f(lst);
			if (!(aux->next = ft_lstnew(aux2->content, aux2->content_size)))
				return (NULL);
			aux = aux->next;
			lst = lst->next;
		}
	}
	return (rezultat);
}
