/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:00:08 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:33:57 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a pointer to a pointer to a linked list, and 
 * a pointer to a function that takes a pointer
 * to a void and returns nothing. It then iterates 
 * through the linked list, calling the function on
 * each element, and then sets the pointer to the linked list to NULL
 * 
 * @param lst A pointer to the first element of a linked list.
 * @param del a pointer to a function that takes a single void 
 * 			pointer argument and returns nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*aux_next;

	aux = *lst;
	while (aux)
	{
		aux_next = aux->next;
		ft_lstdelone(aux, del);
		aux = aux_next;
	}
	*lst = NULL;
}
