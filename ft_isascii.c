/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:30:44 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 11:30:50 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_isascii() function shall test whether ch is a 7-bit US-ASCII
       character code.
*/

#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	else
		return (0);
}
