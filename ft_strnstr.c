/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:41:23 by lyap              #+#    #+#             */
/*   Updated: 2023/05/12 18:09:43 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strnstr() function locates the first occurrence of the null-terminated
     string str2 in the string str1, where not more than len characters
     are searched. Characters that appear after a `\0' character are not
     searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	ret = (char *)str1;
	if (ft_strlen(str2) == 0)
		return (ret);
	i = 0;
	while (i < len && ret[i])
	{
		j = 0;
		while (ret[i + j] == str2[j] && str2[j] && i + j < len)
		{
			if (str2[j + 1] == '\0')
				return (ret + i);
			++j;
		}
	++i;
	}
	return (0);
}
