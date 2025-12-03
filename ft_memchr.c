/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:34:33 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/20 20:15:49 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*casted_s;

	casted_s = (const unsigned char *)s;
	while (n > 0)
	{
		if (*casted_s == (unsigned char)c)
			return ((void *)casted_s);
		casted_s++;
		n--;
	}
	return (NULL);
}
