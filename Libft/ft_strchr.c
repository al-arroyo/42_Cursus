/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:14:18 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:02:12 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strchr() locates the first occurrence 
 * of c (converted to a char) in the string
 * pointed to by s. The terminating null character is considered 
 * to be part of the string; therefore if
 * c is `\0', the functions locate the terminating `\0'
 * 
 * @param s The string to be searched.
 * @param c The character to be located.
 * 
 * @return a pointer to the first occurrence of the character 
 * c in the string s.
 */
char	*ft_strchr(const char *s, int c)
{	
	char	*aux;
	char	x;

	aux = (char *)s;
	x = (char)c;
	if (x == '\0')
	{
		while (*aux != x)
			aux++;
		return (aux);
	}
	while (*aux != '\0')
	{
		if (*aux == x)
			return (aux);
		aux++;
	}
	return (0);
}
