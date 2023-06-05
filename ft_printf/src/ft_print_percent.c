/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:23:03 by alarroyo          #+#    #+#             */
/*   Updated: 2023/06/05 20:01:18 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

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
