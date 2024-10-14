/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:03:11 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/14 13:27:13 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (num--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += num;
		s += num;
		while (num--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
