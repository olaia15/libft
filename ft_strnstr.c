/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:41:37 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/01 11:19:32 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (len + 1 >= needle_len
			&& ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
