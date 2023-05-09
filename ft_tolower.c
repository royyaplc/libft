/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:32:38 by lyap              #+#    #+#             */
/*   Updated: 2023/05/09 10:28:20 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_tolower() converts the letter c to lower case, if possible.
*/

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	else
		return (ch);
}
