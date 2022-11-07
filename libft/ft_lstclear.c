/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:49:52 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/07 17:34:15 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*start;

	start = *lst;
	while (start)
	{
		tmp = start -> next;
		(*del)(start -> content);
		free(start);
		start = tmp;
	}
	*lst = NULL;
}
