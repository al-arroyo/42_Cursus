/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:22:26 by alarroyo          #+#    #+#             */
/*   Updated: 2023/03/18 16:43:55 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_case(char c);
void	ft_printer(char c, char *hex_buffer);

int	ft_print_hex(char c, va_list args)
{
	char	*hex_digits;
	char	*hex_buffer;
	int		i;
	int		n;

	i = 0;
	hex_digits = ft_case(c);
	n = va_arg(args, unsigned int);
	while (n > 0)
	{
		hex_buffer[i] = hex_digits[n % 16];
		n /= 16;
	}
	ft_printer(c, hex_buffer);
	return (ft_strlen(hex_buffer));
}

char	*ft_case(char c)
{
	char	*hex_digits;

	if (c == 'x')
	{
		hex_digits = "0123456789abcdef";
	}
	else
		hex_digits = "0123456789ABCDEF";
	return (hex_digits);
}

void	ft_printer(char c, char *hex_buffer)
{
	if (c == 'x')
	{
		ft_putchar_fd("0x", 1);
		while (hex_buffer)
		{
			ft_putchar_fd(hex_buffer, 1);
		}
	}
	else
	{
		ft_putchar_fd("0X", 1);
		while (hex_buffer)
		{
			ft_putchar_fd(hex_buffer, 1);
		}
	}
}
