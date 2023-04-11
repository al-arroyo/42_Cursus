/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:31:00 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/23 16:21:56 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_value(va_list args, char const v)
{
    int p_len;

    p_len = 0;

    if (v == 'c')
        p_len += ft_print_char(va_arg(args, int));
    else if (v == 's')
        p_len += ft_print_str(va_arg(args, char *));
    else if (v == 'p')
        p_len += ft_print_void(va_arg(args, void *));
    else if (v == 'd')
        p_len += ft_print_base(va_arg(args, int));
    else if (v == 'i')
        p_len += ft_print_int_d(va_arg(args, char *));
    else if (v == 'u')
        p_len += ft_print_base_u(va_arg(args, unsigned int));
    else if (v == 'x' || v == 'X')
        p_len += ft_print_hex(va_arg(args, unsigned int), v);
    else if (v == '%')
        p_len += ft_print_percent();
    return (p_len);
}
