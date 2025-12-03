/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:45:24 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/21 15:23:07 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			result;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	if (size == 0 || nmemb == 0)
		return ((void *)malloc(1));
	result = nmemb * size;
	p = malloc(result);
	if (!p)
		return (NULL);
	i = 0;
	while (i < result)
	{	
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
