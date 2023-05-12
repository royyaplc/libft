/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:43:53 by lyap              #+#    #+#             */
/*   Updated: 2023/05/11 21:42:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_itoa() allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*
Function to find the length of int n. Add 1 for -ve numbers for
'-' sign.
*/
static int	ft_num_length(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		++len;
	while (n != 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}

/*
Function to copy indivdual digits to output string. 
Add '-' sign to -ve numbers and add null terminator.
*/
static void	ft_convert(char *output, int len, long nbr)
{
	int	end;

	end = 0;
	output[len] = '\0';
	if (nbr < 0)
	{
		output[0] = '-';
		nbr = -nbr;
		end = 1;
	}
	while (len > end)
	{
		output[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		--len;
	}
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*output;

	nbr = n;
	len = ft_num_length(nbr);
	output = (char *)malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	ft_convert(output, len, nbr);
	return (output);
}
