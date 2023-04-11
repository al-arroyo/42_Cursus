/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:37:06 by alarroyo          #+#    #+#             */
/*   Updated: 2023/04/01 09:48:40 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_printchar(va_list args);
int	ft_print_void(va_list args);
int	ft_print_str(va_list args);
int	ft_print_hex(char c, va_list args);
int	ft_print_percent(void);
int	ft_print_int(va_list args);

#endif
