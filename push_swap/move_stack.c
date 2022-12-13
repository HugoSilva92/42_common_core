/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei   <marvin@42.fr>>         		+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:18:01 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/13 22:18:01 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_b(t_list **stack, int *cost)
{
	while (*cost != 0)
	{
		if (*cost < 0)
		{
			rrb(stack);
			*cost++;
		}
		else if (*cost > 0)
		{
			rb(stack);
			*cost--;
		}
	}
}

void	r_a(t_list **stack, int *cost)
{
	while (*cost != 0)
	{
		if (*cost < 0)
		{
			rra(stack);
			*cost++;
		}
		else if (*cost > 0)
		{
			ra(stack);
			*cost--;
		}
	}
}

void	rr_both(t_list **stack_a, t_list **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		rr(stack_a, stack_b);
		*cost_a--;
		*cost_b--;
	}
}

void	rrr_both(t_list **stack_a, t_list **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		rrr(stack_a, stack_b);
		*cost_a++;
		*cost_b++;
	}
}

void	move_stack(t_list **stack_a, t_list **stack_b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rrr_both(stack_a, stack_b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		rr_both(stack_a, stack_b, &cost_a, &cost_b);
	r_a(stack_a, &cost_a);
	r_b(stack_b, &cost_b);
	pa(stack_a, stack_b);
}
