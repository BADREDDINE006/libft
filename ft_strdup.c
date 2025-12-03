/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:43:21 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/20 21:10:11 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicated_s;
	size_t	s_len;
	size_t	i;

	s_len = 0;
	while (s[s_len])
	{
		s_len++;
	}
	duplicated_s = malloc(sizeof(char) * (s_len + 1));
	if (duplicated_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicated_s[i] = s[i];
		i++;
	}
	duplicated_s[i] = '\0';
	return (duplicated_s);
}
