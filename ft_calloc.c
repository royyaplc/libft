/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:53:12 by lyap              #+#    #+#             */
/*   Updated: 2023/05/13 12:37:43 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_calloc() function allocates memory for an array of count elements of 
size bytes each and returns a pointer to the allocated memory. The memory 
is set to zero. If count or size is 0, then calloc() returns either NULL, 
or a unique pointer value that can later be successfully passed to free().
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
