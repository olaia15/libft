/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:34:59 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/01 11:16:37 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
