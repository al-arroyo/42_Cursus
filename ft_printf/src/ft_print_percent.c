/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:23:03 by alarroyo          #+#    #+#             */
/*   Updated: 2023/04/01 12:25:48 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/**
 * It writes a % to the standard output
 * 
 * @param c the character to print
 * 
 * @return The number of bytes written.
 */
int	ft_print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
