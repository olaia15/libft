/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:00:39 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/12 19:41:01 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

void	intermediate(char **split, const char *s, int length)
{
	int		i;

	i = 0;
	while (split[i] != NULL)
		i++;
	split[i] = ft_substr(s, 0, length);
	if (!split[i])
	{
		while (i >= 0)
		{
			free(split[i]);
			i--;
		}
		free(split);
		split = NULL;
	}
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	count = 0;
	while (*s && split)
	{
		if (*s != c)
		{
			while (s[count] && s[count] != c)
				count++;
			intermediate(split, s, count);
			if (!split)
				return (NULL);
			s += count;
			count = 0;
		}
		else
			s++;
	}
	return (split);
}
