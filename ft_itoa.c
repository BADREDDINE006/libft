/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:06:09 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/29 11:01:26 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_length(int n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count += 1;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	len = count_length(n);
	if (n < 0)
		len = len + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	num = n;
	str[len] = '\0';
	if (num == 0)
		str[len - 1] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[--len] = (num % 10) + 48;
		num = num / 10;
	}
	return (str);
}
