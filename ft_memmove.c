/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:06:40 by baharrou          #+#    #+#             */
/*   Updated: 2025/11/03 10:17:48 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*casted_src;
	unsigned char		*casted_dest;

	casted_src = (const unsigned char *)src;
	casted_dest = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	if (casted_dest > casted_src)
	{
		while (n-- > 0)
			*(casted_dest + n) = *(casted_src + n);
		*casted_dest = *casted_src;
	}
	else
		ft_memcpy(casted_dest, casted_src, n);
	return (dest);
}
