/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:00:23 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:00:32 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_loop_header() is a function that copies the first n bytes 
 * of the string b to the string a
 * 
 * @param a the destination string
 * @param b the source string
 * @param n the number of bytes to copy
 */
static void	ft_loop_header(char *a, char *b, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}

/**
 * It copies the contents of the string pointed to by b
 *  to the string pointed to by a
 * 
 * @param a the destination string
 * @param b the source string
 * @param n the number of bytes to copy
 */
static void	ft_loop_end(char *a, char *b, size_t n)
{
	size_t	i;

	i = n;
	while (i != 0)
	{
		i--;
		a[i] = b[i];
	}
}

/**
 * The function ft_memmove() copies n bytes from memory 
 * area src to memory area dest
 * 
 * @param dest This is the destination array where the content 
 * is to be copied, type-casted to a
 * pointer.
 * @param src The source string.
 * @param n the number of bytes to copy
 * 
 * @return The address of the destination string.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (a < b)
		ft_loop_header(a, b, n);
	else
		ft_loop_end(a, b, n);
	return (dest);
}
