/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:58:07 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:00:53 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memset() takes a pointer to a memory location,
 *  a value to set, and the number of
 * bytes to set, and returns a pointer to the memory location
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c The character to fill the memory with.
 * @param n The number of bytes to be set to the value c.
 * 
 * @return The address of the first byte of the memory area b.
 */
void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*aux;
	unsigned char	x;

	aux = (unsigned char *)b;
	x = (unsigned char)c;
	while (n != 0)
	{
		*aux = x;
		aux++;
		n--;
	}
	return (b);
}
