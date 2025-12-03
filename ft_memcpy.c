/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:16:04 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/29 09:49:00 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*p1;
	unsigned char		*p2;

	p1 = (const unsigned char *) src;
	p2 = (unsigned char *) dest;
	while (n != 0)
	{
		*p2 = *p1;
		p1++;
		p2++;
		n--;
	}
	return (dest);
}
