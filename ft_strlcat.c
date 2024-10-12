/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:14:58 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/04 12:16:38 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	len_to_copy;
	size_t	count;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	len_to_copy = size - dest_len - 1;
	count = 0;
	while (src[count] && count < len_to_copy)
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	dest[dest_len + count] = '\0';
	return (dest_len + src_len);
}
