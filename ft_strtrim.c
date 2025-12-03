/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:04:45 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/22 18:11:46 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_ft_strchr(const char *s, int c)
{
	char	*var;

	var = ft_strchr(s, c);
	if (var == NULL)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*ptr;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && my_ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && my_ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	len = end - start + 1;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1 + start, len);
	ptr[len] = '\0';
	return (ptr);
}
