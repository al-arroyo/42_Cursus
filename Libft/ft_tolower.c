/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:32:14 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:05:26 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the character is uppercase, convert it to lowercase
 * 
 * @param c The character to be converted.
 * 
 * @return the lowercase version of the character passed as argument.
 */
int	ft_tolower(int c)
{
	char	aux;

	if (c >= 65 && c <= 90)
	{
		aux = c + 32;
		return ((int) aux);
	}
	return (c);
}
