/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:34:26 by lyap              #+#    #+#             */
/*   Updated: 2023/05/13 12:09:52 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strchr() function returns a pointer to the first occurrence 
of the character ch in the string str.
*/

#include "libft.h"

char	*ft_strchr(char *str, int ch)
{
	int				i;
	unsigned char	*char_str;

	i = 0;
	char_str = (unsigned char *)str;
	while (str[i])
	{
		if (char_str[i] == (unsigned char)ch)
			return (&str[i]);
		i++;
	}
	if (ch == '\0')
		return (&str[i]);
	return (NULL);
}
