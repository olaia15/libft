/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:09:57 by operez-l          #+#    #+#             */
/*   Updated: 2024/09/27 12:11:54 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	len_to_copy;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (src_len >= size)
		len_to_copy = size - 1;
	else
		len_to_copy = src_len;
	ft_memcpy(dest, src, len_to_copy);
	dest[len_to_copy] = '\0';
	return (src_len);
}
