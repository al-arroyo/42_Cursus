/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:46:58 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/09 18:46:58 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Create a new list node with the given content
 * 
 * @param content The content of the new list element.
 * 
 * @return A pointer to a new list.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*lists;

	lists = malloc(sizeof(t_list));
	if (!lists)
		return (NULL);
	lists->content = content;
	lists->next = NULL;
	return (lists);
}
