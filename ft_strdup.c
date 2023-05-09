/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:49:16 by lyap              #+#    #+#             */
/*   Updated: 2023/05/08 15:51:42 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strdup() function returns a pointer to a new string which is
       a duplicate of the string str.  Memory for the new string is
       obtained with malloc(3), and can be freed with free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*target;
	size_t	i;

	if (str == NULL)
		return (NULL);
	target = malloc(sizeof(char) * strlen(str) + 1);
	if (target == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		target[i] = str[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
