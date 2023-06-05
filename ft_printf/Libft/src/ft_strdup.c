/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:57:27 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:02:23 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It copies the string s into a new string.
 * 
 * @param s The string to be copied.
 * 
 * @return A pointer to a copy of the string s.
 */
char	*ft_strdup(const char *s)
{
	char	*aux;
	size_t	size;
	char	*aux2;

	size = ft_strlen(s) + 1;
	aux = (char *) malloc (size * sizeof(char));
	aux2 = aux;
	if (!aux)
		return (NULL);
	while (size > 1)
	{
		*aux = (char)*s;
		aux++;
		s++;
		size--;
	}
	*aux = 0;
	return (aux2);
}
