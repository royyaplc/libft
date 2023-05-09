/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:40:03 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 13:40:05 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	char	*char_str;
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	char_str = (char *)str;
	while (i < n)
	{
		if (char_str[i] == ch)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
