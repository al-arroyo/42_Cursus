/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:23:49 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 12:58:14 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It returns the number of digits in the integer n.
 * 
 * @param n the number to be converted to a string
 * 
 * @return The length of the number.
 */
static long int	ft_len(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

/**
 * It converts an unsigned int to a string
 * 
 * @param aux the string that will be returned
 * @param number the number to be converted to a string
 * @param len the length of the number
 * 
 * @return the address of the first element of the array.
 */
static char	*ft_string(char *aux, unsigned int number, long int len)
{
	while (number > 0)
	{
		aux[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (aux);
}

/**
 * It converts an integer into a string
 * 
 * @param n the number to be converted to a string
 * 
 * @return A pointer to a string.
 */
char	*ft_itoa(int n)
{
	char				*aux;
	long int			len;
	unsigned int		number;

	len = ft_len(n);
	aux = malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	aux[len--] = 0;
	if (n == 0)
	{
		*aux = '0';
	}
	if (n < 0)
	{
		n *= -1;
		aux[0] = '-';
	}
	number = n;
	aux = ft_string(aux, number, len);
	return (aux);
}
