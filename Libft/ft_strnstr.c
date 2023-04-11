/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:11:54 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/29 15:59:46 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strnstr() locates the 
 * first occurrence of the null-terminated string to_find in the
 * string str, where not more than n characters are searched. 
 * Characters that appear after a `\0'
 * character are not searched
 * 
 * @param str The string to be searched.
 * @param to_find the string to find
 * @param n the maximum number of characters to search
 * 
 * @return A pointer to the first occurrence of the substring 
 * to_find in the string str, or a null
 * pointer if the substring is not found.
 */
char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	if (n == 0)
		return (0);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j] && (i + j) < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
