/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:29 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/29 15:02:29 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It returns a pointer to the last occurrence of the 
 * character c in the string s.
 * 
 * @param s This is the string to be searched.
 * @param c The character to be located.
 * 
 * @return The address of the last occurrence of the 
 * character c in the string s.
 */
char	*ft_strrchr(const char *s, int c)
{	
	char	*aux;
	char	x;

	if (!*s && c != 0)
		return (0);
	aux = (char *)s;
	x = (char)c;
	while (*aux != '\0')
		aux++;
	if (x == '\0')
		return (aux);
	while (*aux != x)
	{
		aux--;
		if (*aux == x)
			return (aux);
		else if (aux == s)
			return (0);
	}
	return (0);
}
