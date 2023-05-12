/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:36:48 by lyap              #+#    #+#             */
/*   Updated: 2023/05/12 18:09:51 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strrchr() function returns a pointer to the last occurrence of 
the character ch in the string str.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	int		pos;

	i = 0;
	pos = -1;
	if (str == NULL)
		return (NULL);
	while (i <= ft_strlen(str))
	{
		if (str[i] == ch)
			pos = i;
		i++;
	}
	if (pos < 0)
		return (NULL);
	else
		return ((char *)&str[pos]);
}
