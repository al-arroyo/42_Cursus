/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:13:26 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:32:30 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a list, applies a function to each element of the list, 
 * and returns a new list with the
 * results of the function
 * 
 * @param lst a pointer to the first element of a linked list
 * @param f a function that takes a pointer to an element and returns 
 * 			a pointer to a new element.
 * @param del a function that will be called to free the memory 
 * 			of the content of the link
 * 
 * @return A pointer to the first element of the new list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux_content;

	if (!lst || !f)
		return (NULL);
	aux = 0;
	while (lst)
	{
		aux_content = ft_lstnew((*f)(lst->content));
		if (!aux_content)
		{
			ft_lstclear(&aux_content, del);
			return (NULL);
		}
		ft_lstadd_back(&aux, aux_content);
		lst = lst->next;
	}
	return (aux);
}
