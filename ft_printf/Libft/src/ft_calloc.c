/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:41:50 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:56:27 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It allocates memory for an array of nmemb elements 
 * of size bytes each and returns a pointer to the
 * allocated memory. The memory is set to zero.
 * 
 * @param nmemb The number of elements to be allocated.
 * @param size The number of elements to be allocated.
 * 
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;

	ret = (char *) malloc(nmemb * size);
	if (!ret)
		return (0);
	ft_bzero(ret, size * nmemb);
	return ((void *)ret);
}
