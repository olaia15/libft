/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:39:47 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/12 19:47:22 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	start = 0;
	while (s1[start] && is_char_in_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && is_char_in_set(s1[end - 1], set))
	{
		end--;
	}
	len = end - start;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
	{
		return (NULL);
	}
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
