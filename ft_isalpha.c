/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:21:33 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 11:23:01 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_isalpha() function shall test whether ch is a
       character of class alpha
*/

#include "libft.h"

int	ft_isalpha(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (1);
	else if (ch >= 97 && ch <= 122)
		return (2);
	else
		return (0);
}
