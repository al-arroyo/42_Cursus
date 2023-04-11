/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:33:56 by alarroyo          #+#    #+#             */
/*   Updated: 2023/04/01 10:47:29 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(va_list args, const char c);

int	ft_printf(char const *str, ...)
{
	size_t	p_len;
	int		i;
	va_list	args;

	p_len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (*str == '%')
		{
			p_len += ft_control(args, str[i + 1]);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			p_len += (1);
		}
		i++;
	}
	va_end(args);
	return (p_len);
}

int	ft_control(va_list args, const char c)
{
	if (c == 'c')
		return (ft_printchar(args));
	else if (c == 's')
		return (ft_print_str(args));
	else if (c == 'p')
		return (ft_print_void(args));
	else if (c == 'd')
		return (ft_print_int(args));
	else if (c == 'u' || c == 'i')
		return (ft_print_base(c, args));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(c, args));
	else if (c == '%')
		return (ft_print_percent());
}
