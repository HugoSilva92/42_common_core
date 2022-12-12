/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:49:27 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/12 13:09:50 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	get_before_bottom_stack(t_list *stack)
{
	while (stack->next->next)
		stack = stack -> next;
	return (stack);
}

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;
	t_list	*b_end;

	end = get_bottom_stack(*stack);
	b_end = get_before_bottom_stack(*stack);
	tmp = *stack;
	*stack = end;
	*(stack)->next = tmp;
	b_end->next = NULL;
}

void	rra(t_list **stack)
{
	reverse_rotate(stack);
	write (1, "rra\n", 4);
}
