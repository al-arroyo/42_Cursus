/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:02:23 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:58:43 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memchr() locates the first occurrence 
 * of c (converted to an unsigned char) in string
 * s
 * 
 * @param s This is the pointer to the first byte of the memory area.
 * @param c The character to search for.
 * @param n The number of bytes to be checked.
 * 
 * @return A pointer to the first occurrence of the character 
 * c in the first n bytes of the string
 * pointed to, by the argument s.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*aux;
	char	x;

	aux = (char *)s;
	x = (char)c;
	while (n != 0)
	{
		if (*aux == x)
			return ((void *)aux);
		aux++;
		n--;
	}
	return (NULL);
}
