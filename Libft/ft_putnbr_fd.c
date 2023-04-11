/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:41:05 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/12 13:01:39 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_putchar() writes a single character to the file descriptor fd
 * 
 * @param c the character to print
 * @param fd file descriptor
 */
static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

/**
 * It prints the number n to the file descriptor fd.
 * 
 * @param n the number to print
 * @param fd The file descriptor of the file to write to.
 * 
 * @return the number of characters printed.
 */
void	ft_putnbr_fd(int n, int fd)
{
	int	min;

	min = -2147483648;
	if (n == min)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + 48, fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
