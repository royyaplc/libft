/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyap <lyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:06:04 by lyap              #+#    #+#             */
/*   Updated: 2023/05/12 18:09:05 by lyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	wordcount;
	int		newword;

	i = 0;
	wordcount = 0;
	newword = 1;
	while (s[i])
	{
		if (s[i] == c)
			newword = 1;
		else if (newword == 1)
		{
			++wordcount;
			newword = 0;
		}
		++i;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wordlen;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_word_count(s, c) && s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		wordlen = 0;
		while (s[j + wordlen] && s[j + wordlen] != c)
			++wordlen;
		split[i] = ft_substr(s, j, wordlen);
		j = j + wordlen;
		++i;
	}
	split[i] = 0;
	return (split);
}
