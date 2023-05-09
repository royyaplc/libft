/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:29:40 by lyap              #+#    #+#             */
/*   Updated: 2023/05/09 10:28:29 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_toupper() converts the letter c to upper case, if possible.
*/

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	else
		return (ch);
}
