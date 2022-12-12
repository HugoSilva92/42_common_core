/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:05:13 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/12 13:11:01 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	end = get_bottom_stack(*stack);
	tmp = *stack;
	stack = stack->next;
	tmp->next = NULL;
	end->next = tmp;
}

void	ra(t_list	**stack)
{
	rotate(stack);
	write(1,"ra\n", 3);
}
