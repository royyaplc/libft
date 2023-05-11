/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:34:26 by lyap              #+#    #+#             */
/*   Updated: 2023/05/09 10:27:26 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strchr() function returns a pointer to the first occurrence 
of the character ch in the string str.
*/

#include "libft.h"

char	*ft_strchr(char *str, int ch)
{
	int		i;
	char	*ret;

	i = 0;
	if (ch == '\0')
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
