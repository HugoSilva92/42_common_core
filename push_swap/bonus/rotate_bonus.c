/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:05:13 by huolivei          #+#    #+#             */
/*   Updated: 2023/01/02 12:06:24 by huolivei         ###   ########.fr       */
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
	printf("ra\n");
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
