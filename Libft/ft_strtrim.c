/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:49:25 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/09 18:49:20 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It returns a copy of the string given as argument without
 * whitespaces at the beginning or at the end
 * of the string. Whitespaces considered for the trim are 
 * the following: spaces, tabs and newlines
 * 
 * @param s1 The string to be trimmed.
 * @param set The characters to be trimmed.
 * 
 * @return A pointer to a new string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*aux;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	aux = ft_substr((char *)s1, 0, size_s + 1);
	return (aux);
}
