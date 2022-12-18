/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:05:13 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/18 22:23:23 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	tmp = *stack;
	*stack = (*stack)->next;
	end = get_bottom_stack(*stack);
	tmp->next = NULL;
	end->next = tmp;
}

void	ra(t_list **stack)
{
	rotate(stack);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	rb(t_list **stack)
{
	rotate(stack);
}
