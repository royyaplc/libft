/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:24:08 by lyap              #+#    #+#             */
/*   Updated: 2023/05/12 12:24:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memmove() function copies n bytes from memory area src to
       memory area dest.  The memory areas may overlap: copying takes
       place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	i = 0;
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (char_dest > char_src)
		while (n-- > 0)
			char_dest[n] = char_src[n];
	else
	{
		while (i < n)
		{
			char_dest[i] = char_src[i];
			++i;
		}
	}
	return (dest);
}
