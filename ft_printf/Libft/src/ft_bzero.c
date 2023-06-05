/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:20:10 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:52:18 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_bzero() takes a pointer to a memory 
 * area and a size_t as parameters, and writes
 * zeroes to the memory area
 * 
 * @param s This is the pointer to the memory that needs 
 * 			to be filled with zeroes.
 * @param n The number of bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	char	*aux;

	aux = (char *)s;
	if (n != 0)
	{
		while (n != 0)
		{
			*aux = '\0';
			aux++;
			n--;
		}
		s = aux;
	}
}
