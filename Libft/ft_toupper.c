/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:23:26 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:05:38 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the character is lowercase, return the uppercase version of it
 * 
 * @param c The character to be converted.
 * 
 * @return the uppercase equivalent of the character passed 
 * as argument, if the argument is a lowercase
 * letter.
 */
int	ft_toupper(int c)
{
	char	aux;

	if (c >= 97 && c <= 122)
	{
		aux = c - 32;
		return ((int) aux);
	}
	return (c);
}
