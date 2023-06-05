/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:59:16 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:59:37 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy n bytes from memory area src to memory area dest
 * 
 * @param dest This is the pointer to the destination array w
 * 			here the content is to be copied,
 * 			type-casted to a pointer of type void*.
 * @param src The source string.
 * @param n The number of bytes to copy.
 * 
 * @return The address of the destination string.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (n != 0)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dest);
}
