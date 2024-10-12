/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:34:48 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/01 11:16:14 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	const unsigned char	*p;

	p = (const unsigned char *)str;
	while (num--)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}
