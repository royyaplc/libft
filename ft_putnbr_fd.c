/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:17:34 by lyap              #+#    #+#             */
/*   Updated: 2023/05/09 13:26:03 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Outputs the integer ’n’ to the given file
descriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
