/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baharrou <baharrou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:19:26 by baharrou          #+#    #+#             */
/*   Updated: 2025/10/28 12:03:48 by baharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst == NULL)
		return ;
	current = *lst;
	while (*lst)
	{
		current = current->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
	*lst = NULL;
}
