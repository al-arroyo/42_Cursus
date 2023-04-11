/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:07:03 by alarroyo          #+#    #+#             */
/*   Updated: 2023/03/18 17:13:09 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_d(unsigned int n);

int	ft_print_void(va_list args)
{
	size_t			len;

	len = ft_count_d(va_arg(args, unsigned int));
	ft_putstr_fd("0x", 1);
	ft_print_hex('x', args);
	return (len);
}

size_t	ft_count_d(unsigned int n)
{
	size_t	digits;

	digits = 0;
	while (n > 0)
	{
		n /= 16;
		digits++;
	}
	return (digits);
}
