/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:00:55 by lyap              #+#    #+#             */
/*   Updated: 2023/05/06 14:00:59 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memcmp() function compares the first n bytes (each interpreted as 
unsigned char) of the memory areas str1 and str2.
*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*char_str1;
	const unsigned char	*char_str2;

	if (n == 0)
		return (0);
	i = 0;
	char_str1 = (const unsigned char *)str1;
	char_str2 = (const unsigned char *)str2;
	while (i < n)
	{
		if (char_str1[i] != char_str2[i])
			return (char_str1[i] - char_str2[i]);
		++i;
	}
}
