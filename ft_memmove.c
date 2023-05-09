/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:24:08 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 14:24:12 by lyap             ###   ########.fr       */
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
	char	*char_temp;
	size_t	i;

	i = 0;
	char_dest = (char *)dest;
	char_src = (char *)src;
	char_temp = (char *)malloc(sizeof(char) * n);
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		char_temp[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_temp[i];
		i++;
	}
	free (char_temp);
	return (dest);
}
