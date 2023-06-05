/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:06:33 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:03:14 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It copies the string src to the end of dest, but only if 
 * there's enough space in dest
 * 
 * @param dest This is the destination string.
 * @param src The string to be appended.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The length of the string it tried to create in dest.
 */
size_t	ft_strlcat(char *dest, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_src;

	i = 0;
	j = 0;
	size_src = ft_strlen(src);
	while (dest[i] != 0 && i < dstsize)
		i++;
	while (src[j] != '\0' && (j + i + 1) < dstsize)
	{
		dest[j + i] = src[j];
		j++;
	}
	if (j != 0)
		dest[j + i] = '\0';
	return (size_src + i);
}
