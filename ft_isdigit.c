/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:52:15 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 11:52:43 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_isdigit() function shall test whether ch is a
       character of class digit
*/

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= 48 && ch <= 57)
		return (1);
	else
		return (0);
}
