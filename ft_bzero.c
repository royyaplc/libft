/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:44:45 by lyap              #+#    #+#             */
/*   Updated: 2023/05/03 10:47:23 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The ft_bzero() function erases the data in the n bytes of the memory
 starting at the location pointed to by ptr, by writing zeros (bytes
 containing '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *)ptr;
	while (i < n)
	{
		char_ptr[i] = '\0';
		i++;
	}
}
