/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:04:04 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:59:03 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memcmp() compares the first n bytes 
 * of memory area s1 and s2
 * 
 * @param ptr1 This is the pointer to the first block of memory.
 * @param ptr2 The pointer to the memory area to compare to.
 * @param n The number of bytes to compare.
 * 
 * @return The difference between the first two different bytes 
 * 			in the two strings.
 */
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && (i < n - 1)))
		i++;
	return ((int)(s1[i] - s2[i]));
}
