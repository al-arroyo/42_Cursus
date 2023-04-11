/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:30:09 by alarroyo          #+#    #+#             */
/*   Updated: 2023/04/01 09:42:53 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It writes a single character to the standard output
 * 
 * @param c the character to print
 * 
 * @return The number of bytes written.
 */
int	ft_printchar(va_list args)
{
	if (args == 0)
		return (0);
	ft_putchar_fd((unsigned char) va_arg(args, int), 1);
	return (1);
}
