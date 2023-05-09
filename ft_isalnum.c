/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:12:35 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 11:13:12 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_isalnum() function shall test whether ch is a
       character of class alpha or digit
*/

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch >= 48 && ch <= 57)
		|| (ch >= 65 && ch <= 90)
		|| (ch >= 97 && ch <= 122))
		return (1);
	else
		return (0);
}
