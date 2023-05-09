/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:49:05 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 14:49:16 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_memset() function fills the first n bytes of the memory area
       pointed to by ptr with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t	i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *)ptr;
	while (i < n)
	{
		char_ptr[i] = c;
		i++;
	}
	return (ptr);
}
