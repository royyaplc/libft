/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:29:40 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 10:34:44 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_atoi() function converts the initial portion of the string
       pointed to by str to int.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	output;

	i = 0;
	neg = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			neg = -1;
		i++;
	}
	output = 0;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		output = (10 * output) + str[i] - 48;
		i++;
	}
	return (neg * output);
}
