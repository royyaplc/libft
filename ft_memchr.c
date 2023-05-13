/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:40:03 by lyap              #+#    #+#             */
/*   Updated: 2023/05/13 11:57:15 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned char	*char_str;
	size_t			i;

	i = 0;
	if (str == NULL)
		return (NULL);
	char_str = (unsigned char *)str;
	while (i < n)
	{
		if (char_str[i] == (unsigned char)ch)
			return (&char_str[i]);
		i++;
	}
	return (NULL);
}
