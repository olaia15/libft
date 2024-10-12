/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:27:45 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/01 11:46:23 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last = str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)last);
}
