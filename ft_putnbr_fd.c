/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:17:34 by lyap              #+#    #+#             */
/*   Updated: 2023/05/12 18:08:51 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Outputs the integer ’n’ to the given file
descriptor.
*/

#include "libft.h"

static void	ft_write_num(int n, int fd)
{
	int	tens;
	int	digits;
	int	num;

	digits = 0;
	num = n;
	while (num != 0)
	{
		num /= 10;
		++digits;
	}
	tens = 1;
	while (digits != 1)
	{
		tens *= 10;
		--digits;
	}
	while (tens != 0)
	{
		ft_putchar_fd((n / tens) + '0', fd);
		n = n - n / tens * tens;
		tens /= 10;
	}
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	ft_write_num(n, fd);
	return ;
}
