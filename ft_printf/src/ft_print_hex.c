/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:22:26 by alarroyo          #+#    #+#             */
/*   Updated: 2023/06/05 20:01:10 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

char	*ft_case(char c);
void	ft_printer(char *hex_buffer);

int	ft_print_hex(char c, va_list args)
{
	char	*hex_digits;
	char	*hex_buffer;
	int		i;
	int		n;

	i = 0;
	hex_digits = ft_case(c);
	hex_buffer = NULL;
	n = va_arg(args, unsigned int);
	while (n > 0)
	{
		hex_buffer[i] = hex_digits[n % 16];
		n /= 16;
	}
	ft_printer(hex_buffer);
	return (1);
}

char	*ft_case(char c)
{
	char	*hex_digits;

	ft_putchar_fd('0', 1);
	if (c == 'x')
	{
		hex_digits = "0123456789abcdef";
		ft_putchar_fd('x', 1);
	}
	else
	{
		hex_digits = "0123456789ABCDEF";
		ft_putchar_fd('X', 1);
	}
	return (hex_digits);
}

void	ft_printer(char *hex_buffer)
{
	size_t	i;

	i = 0;
	while (hex_buffer[i])
	{
		ft_putchar_fd(hex_buffer[i], 1);
		i++;
	}
}
