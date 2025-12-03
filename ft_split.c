/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:54:59 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/29 18:50:09 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_all(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	skip_delimiters(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static int	ft_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;
	int		size;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		i += skip_delimiters(&s[i], c);
		size = ft_size(&s[i], c);
		ptr[j] = ft_substr(s, i, size);
		if (!ptr[j++])
			return (free_all(ptr));
		i += size;
	}
	ptr[j] = NULL;
	return (ptr);
}
