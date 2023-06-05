/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:07:58 by alarroyo          #+#    #+#             */
/*   Updated: 2023/04/01 15:15:09 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_c_digits(unsigned int n);
size_t	ft_len(int n);

int	ft_print_base(va_list args)
{
	size_t	len;
	size_t	n;

	if (args == 0)
		return (0);
	n = va_arg(args, int);
	len = ft_len(n);
	ft_putnbr_fd(n, 1);
	return (len);
}

size_t	ft_c_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

size_t	ft_len(int n)
{
	size_t	len;

	if (n < 0)
	{
		n *= -1;
		len = ft_c_digits(n) + 1;
	}
	else
		len = ft_c_digits(n);
	return (len);
}
