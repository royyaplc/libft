/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:36:48 by lyap              #+#    #+#             */
/*   Updated: 2023/05/13 14:20:55 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strrchr() function returns a pointer to the last occurrence of 
the character ch in the string str.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t			i;
	unsigned char	*char_str;
	int				pos;

	i = 0;
	char_str = (unsigned char *)str;
	pos = -1;
	while (i <= ft_strlen(str))
	{
		if (char_str[i] == (unsigned char)ch)
			pos = i;
		i++;
	}
	if (pos < 0)
		return (NULL);
	else
		return ((char *)&str[pos]);
}
