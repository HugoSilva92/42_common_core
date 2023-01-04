/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo <hugo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:49:27 by huolivei          #+#    #+#             */
/*   Updated: 2023/01/03 23:56:30 by hugo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_before_bottom_stack(t_list *stack)
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
	(*stack)->next = tmp;
	b_end->next = NULL;
}

void	rra(t_list **stack)
{
	reverse_rotate(stack);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}

void	rrb(t_list **stack)
{
	reverse_rotate(stack);
}
