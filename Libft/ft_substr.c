/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:17:46 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:05:17 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * "ft_substr() returns a pointer to a new string which 
 * is a substring of the string pointed to by s,
 * starting at index start and of length len."
 * 
 * The first thing we do is check if s is NULL. If it is, 
 * we return NULL
 * 
 * @param s The string to be split.
 * @param start the index of the first character to 
 * include in the substring.
 * @param len the maximum number of characters to copy
 * 
 * @return A pointer to a new string.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	size_t				i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		substr = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	else
		substr = ft_calloc(sizeof(char), len + 1);
	if (!substr)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start + i] != '\0' && i < len)
		{
		substr[i] = s[start + i];
		i++;
		}
	}
	substr[i] = 0;
	return (substr);
}
