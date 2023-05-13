/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:48:03 by lyap              #+#    #+#             */
/*   Updated: 2023/05/13 11:45:06 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	char_dest = (char *)dest;
	char_src = (char *)src;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
