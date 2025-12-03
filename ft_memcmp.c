/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:57:44 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/20 20:37:33 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*casted_s1;
	const unsigned char	*casted_s2;

	if (n == 0)
		return (0);
	casted_s1 = (const unsigned char *)s1;
	casted_s2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*casted_s1 != *casted_s2)
			return (*casted_s1 - *casted_s2);
		casted_s1++;
		casted_s2++;
		n--;
	}
	return (0);
}
