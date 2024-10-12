/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-l <operez-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:33:45 by operez-l          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:13 by operez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		sign;

	num = n;
	sign = (num < 0);
	if (sign)
	{
		num = -num;
	}
	len = ft_num_len(num) + sign;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= sign)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
